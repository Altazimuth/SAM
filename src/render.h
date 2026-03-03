#ifndef RENDER_H
#define RENDER_H

#include <stdint.h>

void Render();
void SetMouthThroat(unsigned char mouth, unsigned char throat);

void ProcessFrames(uint16_t mem48);
void RenderSample(unsigned char *mem66, unsigned char consonantFlag, uint16_t mem49);
uint16_t CreateTransitions();

#define PHONEME_PERIOD (1)
#define PHONEME_QUESTION (2)

#define RISING_INFLECTION (1)
#define FALLING_INFLECTION (255)

enum class tables_e : uint8_t
{
    pitches = 168,
    freq_0,
    freq_1,
    freq_2,
    tab_amp_0,
    tab_amp_1,
    tab_amp_2,
    MAXIMUM // exclusive
};

#endif
