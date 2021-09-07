/*
  ==============================================================================

    midiVolume.h
    Created: 7 Sep 2021 3:43:56pm
    Author:  Vinh

  ==============================================================================
*/

#pragma once
#include "PluginProcessor.h"
#include "PluginEditor.h"

class TutorialPluginAudioProcessorEditor : public juce::AudioProcessorEditor
{
public:
    //TutorialPluginAudioProcessorEditor(TutorialPluginAudioProcessor&);
    ~TutorialPluginAudioProcessorEditor();

    //===================================================================
    void paint(juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    //TutorialPluginAudioProcessor& audioProcessor;

    juce::Slider midiVolume; // [1]

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(TutorialPluginAudioProcessorEditor)
};