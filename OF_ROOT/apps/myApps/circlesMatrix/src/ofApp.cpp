#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetBackgroundColor(
                         ofMap(ofGetMouseX(), 0, ofGetWidth(), 100, 255),
                         50,
                         ofMap(ofGetMouseX(), 0, ofGetWidth(), 100, 255)
                         );
    
    int x_frame_size = ofGetWidth() / 10;
    int x = x_frame_size / 2;
    
    int y_frame_size = ofGetHeight() / 5;
    int y = y_frame_size / 2;
    
    int var_x = ofMap(ofGetMouseX(), 0, ofGetWidth(), -70, 70);
    int var_y = ofMap(ofGetMouseY(), 0, ofGetWidth(), -70, 70);
    
    ofSetColor(
               ofMap(ofGetMouseY(), 0, ofGetWidth(), 0, 255),
               255,
               ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 255)
               );
    
    int r = ofMap(ofGetMouseX(), 0, ofGetWidth(), 10, 70);
    
    for (int i = 0; i < x_frame_size-1; i++){
        for (int j = 0; j < y_frame_size-1; j++){
            
            ofDrawCircle(x + var_x, y + var_y, r);
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
