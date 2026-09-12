cmake_minimum_required(VERSION 3.22)
project(reverbAudio VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(JUCE)

juce_add_plugin(reverbAudio
        COMPANY_NAME "MyAudioLab"
        IS_SYNTH FALSE
        NEEDS_MIDI_INPUT FALSE
        NEEDS_MIDI_OUTPUT FALSE
        IS_MIDI_EFFECT FALSE
        EDITOR_WANTS_KEYBOARD_FOCUS FALSE
        COPY_PLUGIN_AFTER_BUILD FALSE
        PLUGIN_MANUFACTURER_CODE NBoh
        PLUGIN_CODE Acrv
        FORMATS Standalone
        PRODUCT_NAME "Audio Convolution Reverb"
)

target_sources(reverbAudio PRIVATE
    Source/PluginProcessor.cpp)

target_link_libraries(reverbAudio
    PRIVATE juce::juce_audio_utils
    PUBLIC
        juce::juce_recommended_config_flags
        juce::juce_recommended_lto_flags
        juce::juce_recommended_warning_flags
)

