
// portaudio hookin and player

#ifndef PA_PLAYER_H
#define PA_PLAYER_H

#include <portaudio.h>

#define PA_HANDLE(st) pa_error = st; if (pa_error != paNoError) { tmb_pa_errorhandle(); }

typedef struct {
    // data structure that is passed (size 0 because we don't need it)
} paTestData;



PaStream * pa_stream;
PaStreamParameters pa_parameters;
PaError pa_error;


void tmb_pa_init();

void tmb_pa_errorhandle();

// callback audio function for generating sample data
static int tmb_pa_callback(
    const void *inputBuffer, void *outputBuffer,
    unsigned long framesPerBuffer,
    const PaStreamCallbackTimeInfo* timeInfo,
    PaStreamCallbackFlags statusFlags,
    void *userData
);


#endif
