#include "solution.h"

std::vector<int> solution(std::vector<std::string> genres, std::vector<int> plays)
{
	auto genres_plays_map = std::unordered_map<std::string, int>();
	auto genres_song_map = std::unordered_map<std::string, std::vector<std::pair<int, int>>>();

	for (auto index = 0; index < plays.size(); index++)
	{
		auto genre = genres[index];
		auto play = plays[index];

		genres_plays_map[genre] += play;
		genres_song_map[genre].push_back(std::pair(index, play));
	}

	std::vector<std::pair<std::string, int>> genres_plays_vector(genres_plays_map.begin(), genres_plays_map.end());
	std::sort(genres_plays_vector.begin(), genres_plays_vector.end(), [](auto x, auto y) {
		return x.second > y.second;
	});

	std::vector<int> answer;

	for (const auto& genre: genres_plays_vector)
	{
		auto songs = genres_song_map[genre.first];
		std::sort(songs.begin(), songs.end(), [](auto x, auto y) {
			return x.second == y.second ? x.first < y.first : x.second > y.second;
		});

		for (int index = 0; index < std::min(songs.size(), 2UL); index++)
		{
			answer.push_back(songs[index].first);
		}
	}

	return answer;
}
