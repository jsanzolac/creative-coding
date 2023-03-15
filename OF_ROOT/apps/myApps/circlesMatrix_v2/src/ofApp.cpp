#include "ofApp.h"
#include <cmath>

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetBackgroundColor(40, 40, 40);
    
    int x_frame_size = ofGetWidth() / 15;
    int x = x_frame_size / 2;
    
    int y_frame_size = ofGetHeight() / 10;
    int y = y_frame_size / 2;
    
    int var_x = ofMap(ofGetMouseX(), 0, ofGetWidth(), -40, 40);
    int var_y = ofMap(ofGetMouseY(), 0, ofGetWidth(), -40, 40);
    
    double r = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 3.15);
    double sin_r = sin(r) * 20;
    
    for (int i = 0; i < x_frame_size-1; i++){
        
        int mod = i % 2;
        
        if (mod > 0){
            ofSetColor(0, 255, 0);
        } else {
            ofSetColor(255, 255, 255);
        }
        
        for (int j = 0; j < y_frame_size-1; j++){
            ofDrawCircle(x + var_x, y + var_y, sin_r);
            x += x_frame_size;
        }
        y += y_frame_size;
        x = x_frame_size / 2;
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
