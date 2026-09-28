#include "PluginProcessor.h"

AudioConvolutionReverbProcessor::AudioConvolutionReverbProcessor()
    : AudioProcessor(BusesProperties()
        .withInput("Input", juce::AudioChannelSet::stereo(), true)
        .withOutput("Output", juce::AudioChannelSet::stereo(), true))
    {
    }

AudioConvolutionReverbProcessor::~AudioConvolutionReverbProcessor() {}

void AudioConvolutionReverbProcessor::prepareToPlay(double, int)
{
    //ReservaDeMemoriaConvolución
}

void AudioConvolutionReverbProcessor::releaseResources() {}

void AudioConvolutionReverbProcessor::processBlock(juce::AudioBuffer<float>& buffer, juce::MidiBuffer&)
{
    //passthrough puro: el audio sale igual que entra.
    //Este es el "Hello world"
    juce::ignoreUnused(buffer);

}

//Esta función es la que JUCE busca
//para saber qué clase instanciar como tu plugin
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new AudioConvolutionReverbProcessor();
}
