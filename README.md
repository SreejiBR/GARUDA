# GARUDA: Guarded Automated Recognizer with Unyielding Data Assurance

**Advanced Video Summarization, English-Malayalam Translation, and Secure Data Handling**

---

## Overview

**GARUDA** (Guarded Automated Recognizer with Unyielding Data Assurance) is an innovative software solution developed to streamline video content processing with a strong emphasis on data security. Integrating state-of-the-art technologies in artificial intelligence, cryptography(Encryption), and language processing, GARUDA automates tasks like video summarization, English-Malayalam translation, and secure data management(Securing Python written source code), making it a valuable tool for enterprises dealing with large volumes of digital media. Introducing **C++ - Python** communication and **securing** Python source code, by encrypting source code whenever idle.

This project was initially developed by **Mubin M Bobby**, **Muhammed Abdulla A**, and **Sreejith B R**, as part of Bachelor of Technology degree in Computer Science and Engineering at MG College of Engineering.

---

## Features

### 1. **Comprehensive Data Security**
   - **AES-GCM Encryption**: Protects sensitive source code data written in Python with Advanced Encryption Standard (AES) using Galois/Counter Mode, ensuring both confidentiality and integrity.
   - **Secure Cloud Backup**: Backs up encrypted data to Google Drive, providing redundancy and resilience against data loss.

### 2. **AI-Driven Video Summarization**
   - **BART Model Integration**: Extracts essential insights from lengthy videos, allowing users to understand content quickly without needing to watch the full video.
   - **Audio Transcription**: Converts video audio to text using high-accuracy transcription, which is then summarized for concise information consumption.

### 3. **Multilingual Translation and Speech Synthesis**
   - **Google Translate API Integration**: Translates text between English and Malayalam, enhancing accessibility for regional audiences.
   - **Edge Text-to-Speech (TTS)**: Converts summarized or translated text into natural-sounding speech in both English and Malayalam, offering an auditory experience for users.

### 4. **User-Friendly Interface Powered by Krypton Toolkit**
   - **Professional UI**: Employs the Krypton UI Toolkit to deliver a sleek, intuitive interface that enhances user experience and engagement.
   - **Customizable Design**: Ensures a polished look with flexible design elements, offering an accessible and responsive interface for all user interactions.

---

## System Architecture

The architecture of GARUDA is modular, ensuring efficient functionality across its components:

- **Security Module**: Encrypts sensitive data using AES-GCM and facilitates secure backup to Google Drive and restores automatically if data is missing.
- **Video Summarization Module**: Utilizes the BART model to generate concise summaries from video content.
- **Translation & Speech Module**: Provides English-Malayalam translations and converts text to speech using the Edge TTS engine.
- **User Interface Module**: Developed with the Krypton Toolkit, offering a professional, responsive design optimized for user engagement.

---

## System Requirements

### Software Stack
- **Operating System**: Windows 10 or 11
- **Programming Languages**: C++ (for UI and Windows Forms), Python (for backend processing)
- **Development Tools**: Visual Studio 2022, PyCharm 2023

### Python Dependencies
- `cryptography` for data encryption
- `SpeechRecognition` and `moviePy` for audio processing
- `transformers` for the BART model
- `deep-translator`, `g4f`, `pygame`, `edge-tts` for translation, GPT Integration and TTS functionality.

---

## Installation Guide

1. **Clone the Repository**
   ```bash
   git clone https://github.com/SreejiBR/GARUDA
2. **Install Python Dependencies**
   ```bash
   pip install cryptography SpeechRecognition moviepy transformers deep-translator g4f pygame edge-tts
3. **Build the Project in Visual Studio**
   -Open GARUDA in Visual Studio 2022, load the solution file, and build.
4. **Configure the Project**
   -Open the `py.txt` file, and make sure the file content is locally installed python library location with all dependencies installed.
5. **Launch Garuda Software**

## Usage Guide
1. **Secure Content Handling:** Start by securely logging in to access GARUDA's functionalities. All data is encrypted for confidentiality.
2. **Video Summarization:** Upload a video file to generate a summary, which distills essential insights for efficient content consumption.
3. **Multilingual Interaction:** Translate content to Malayalam or generate speech outputs to engage with the content audibly.

## Credits(Technical side)
1. **ComponentFactory/Krypton** : https://github.com/ComponentFactory/Krypton
2. **G4f** : https://pypi.org/project/g4f
3. **Edge TTS** : https://pypi.org/project/edge-tts
4. **BART Model** : https://huggingface.co/docs/transformers/en/model_doc/bart
5. **Transformers** : https://pypi.org/project/transformers
6. **Moviepy** : https://pypi.org/project/moviepy
7. **Deep Translator** : https://pypi.org/project/deep-translator
8. **Pygame** : https://pypi.org/project/pygame
## Contact
For inquiries, custom solutions, or technical support, contact me at sreejithsachu0@gmail.com.  
