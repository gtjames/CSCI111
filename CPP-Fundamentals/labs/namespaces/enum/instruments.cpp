#include <iostream>
#include <string>

namespace Flute
{
    void play(std::string tune) {}
}
namespace videoGame
{
    void play(std::string game, int level) {}
}
namespace Oboe
{
    void play(std::string tune) {}
}
namespace MP3
{
    void play(std::string tune) {}
}
namespace Tone
{
    void play(int HZ) {
        // play the tone at the given frequency in HZ
    }
}

int main() {
    std::string instrument;
    std::string tune;
    std::cin >> instrument >> tune;

    if (instrument == "flute")
    {
        Flute::play(tune);
    }
    else if (instrument == "videoGame")
    {
        videoGame::play(instrument, 1);
    }
    else if (instrument == "oboe")
    {
        Oboe::play(tune);
    }
    else if (instrument == "mp3")
    {
        MP3::play(tune);
    }
    else if (instrument == "tone")
    {
        Tone::play(440);
    }
    return 0;
}