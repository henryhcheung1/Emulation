#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// algorithm
// read file
// iterate through file by byte
// pass byte to Disassemble8080 function, output 8080 instruction, advance counter by X bytes returned by Disassemble8080 function
// terminate once counter has reached the end of file

int Disassemble8080(char* buffer);


int main() {

    ifstream file;
    string filename = "test.cpp";
    char *cstr = new char; // store a single byte

    file.open(filename);

    if (!file.is_open()){
        return 0;
    }

    file.seekg(0, ios::end);

    size_t fileSize = file.tellg();
    cout << "fileSize: " + to_string(fileSize) << endl;

    file.seekg(0, ios::beg);

    char * buffer = new char [fileSize];
    file.read(buffer, fileSize);

	// for ( size_t i = 0; i < strlen(buffer); i++ )
	// {
	// 	// cout << buffer[i] << " -> ";
    //     // cout << hex << (int)buffer[i] << "\n";

    //     // ostringstream oss;
    //     // oss << "0x" << hex << (int) buffer[i];
    //     // oss << hex << (int) buffer[i];

    //     // cout << oss.str() << " ";

    //     // strcpy(cstr, oss.str().c_str());

    //     // cout << hex << (int) buffer[i] << " -> ";
    //     // cout << (int) buffer[i] << "\n";

    //     int opbytes = Disassemble8080((int) buffer[i]);


	// }

    int pc = 0;
	while (pc < strlen(buffer)){

        pc += Disassemble8080(&buffer[pc]);
	}
    
    cout << endl;

    file.close();
    delete[] buffer;
    // delete cstr;

    return 0;
}

int Disassemble8080(char* buffer){

    int opbytes = 1;

    cout << hex << (int)*buffer << "\n";

    switch ((int)buffer){
        case 0x00: cout << "NOP"; break;
        case 0x01: cout << "LXI "; break;
        case 0x02: cout << ""; break;
        case 0x03: cout << ""; break;
        case 0x04: cout << ""; break;
        case 0x05: cout << ""; break;
        case 0x06: cout << ""; break;
        case 0x07: cout << ""; break;
        case 0x08: cout << ""; break;
        case 0x09: cout << ""; break;
        case 0x0A: cout << ""; break;
        case 0x0B: cout << ""; break;
        case 0x0C: cout << ""; break;
        case 0x0D: cout << ""; break;
        case 0x0E: cout << ""; break;
        case 0x0F: cout << ""; break;
        case 0x10: cout << ""; break;
        case 0x11: cout << ""; break;
        case 0x12: cout << ""; break;
        case 0x13: cout << ""; break;
        case 0x14: cout << ""; break;
        case 0x15: cout << ""; break;
        case 0x16: cout << ""; break;
        case 0x17: cout << ""; break;
        case 0x18: cout << ""; break;
        case 0x19: cout << ""; break;
        case 0x1A: cout << ""; break;
        case 0x1B: cout << ""; break;
        case 0x1C: cout << ""; break;
        case 0x1D: cout << ""; break;
        case 0x1E: cout << ""; break;
        case 0x1F: cout << ""; break;
        case 0x20: cout << ""; break;
        case 0x21: cout << ""; break;
        case 0x22: cout << ""; break;
        case 0x23: cout << ""; break;
        case 0x24: cout << ""; break;
        case 0x25: cout << ""; break;
        case 0x26: cout << ""; break;
        case 0x27: cout << ""; break;
        case 0x28: cout << ""; break;
        case 0x29: cout << ""; break;
        case 0x2A: cout << ""; break;
        case 0x2B: cout << ""; break;
        case 0x2C: cout << ""; break;
        case 0x2D: cout << ""; break;
        case 0x2E: cout << ""; break;
        case 0x2F: cout << ""; break;
        case 0x30: cout << ""; break;
        case 0x31: cout << ""; break;
        case 0x32: cout << ""; break;
        case 0x33: cout << ""; break;
        case 0x34: cout << ""; break;
        case 0x35: cout << ""; break;
        case 0x36: cout << ""; break;
        case 0x37: cout << ""; break;
        case 0x38: cout << ""; break;
        case 0x39: cout << ""; break;
        case 0x3A: cout << ""; break;
        case 0x3B: cout << ""; break;
        case 0x3C: cout << ""; break;
        case 0x3D: cout << ""; break;
        case 0x3E: cout << ""; break;
        case 0x3F: cout << ""; break;
        case 0x40: cout << ""; break;
        case 0x41: cout << ""; break;
        case 0x42: cout << ""; break;
        case 0x43: cout << ""; break;
        case 0x44: cout << ""; break;
        case 0x45: cout << ""; break;
        case 0x46: cout << ""; break;
        case 0x47: cout << ""; break;
        case 0x48: cout << ""; break;
        case 0x49: cout << ""; break;
        case 0x4A: cout << ""; break;
        case 0x4B: cout << ""; break;
        case 0x4C: cout << ""; break;
        case 0x4D: cout << ""; break;
        case 0x4E: cout << ""; break;
        case 0x4F: cout << ""; break;
        case 0x50: cout << ""; break;
        case 0x51: cout << ""; break;
        case 0x52: cout << ""; break;
        case 0x53: cout << ""; break;
        case 0x54: cout << ""; break;
        case 0x55: cout << ""; break;
        case 0x56: cout << ""; break;
        case 0x57: cout << ""; break;
        case 0x58: cout << ""; break;
        case 0x59: cout << ""; break;
        case 0x5A: cout << ""; break;
        case 0x5B: cout << ""; break;
        case 0x5C: cout << ""; break;
        case 0x5D: cout << ""; break;
        case 0x5E: cout << ""; break;
        case 0x5F: cout << ""; break;
        case 0x60: cout << ""; break;
        case 0x61: cout << ""; break;
        case 0x62: cout << ""; break;
        case 0x63: cout << ""; break;
        case 0x64: cout << ""; break;
        case 0x65: cout << ""; break;
        case 0x66: cout << ""; break;
        case 0x67: cout << ""; break;
        case 0x68: cout << ""; break;
        case 0x69: cout << ""; break;
        case 0x6A: cout << ""; break;
        case 0x6B: cout << ""; break;
        case 0x6C: cout << ""; break;
        case 0x6D: cout << ""; break;
        case 0x6E: cout << ""; break;
        case 0x6F: cout << ""; break;
        case 0x70: cout << ""; break;
        case 0x71: cout << ""; break;
        case 0x72: cout << ""; break;
        case 0x73: cout << ""; break;
        case 0x74: cout << ""; break;
        case 0x75: cout << ""; break;
        case 0x76: cout << ""; break;
        case 0x77: cout << ""; break;
        case 0x78: cout << ""; break;
        case 0x79: cout << ""; break;
        case 0x7A: cout << ""; break;
        case 0x7B: cout << ""; break;
        case 0x7C: cout << ""; break;
        case 0x7D: cout << ""; break;
        case 0x7E: cout << ""; break;
        case 0x7F: cout << ""; break;
        case 0x80: cout << ""; break;
        case 0x81: cout << ""; break;
        case 0x82: cout << ""; break;
        case 0x83: cout << ""; break;
        case 0x84: cout << ""; break;
        case 0x85: cout << ""; break;
        case 0x86: cout << ""; break;
        case 0x87: cout << ""; break;
        case 0x88: cout << ""; break;
        case 0x89: cout << ""; break;
        case 0x8A: cout << ""; break;
        case 0x8B: cout << ""; break;
        case 0x8C: cout << ""; break;
        case 0x8D: cout << ""; break;
        case 0x8E: cout << ""; break;
        case 0x8F: cout << ""; break;
        case 0x90: cout << ""; break;
        case 0x91: cout << ""; break;
        case 0x92: cout << ""; break;
        case 0x93: cout << ""; break;
        case 0x94: cout << ""; break;
        case 0x95: cout << ""; break;
        case 0x96: cout << ""; break;
        case 0x97: cout << ""; break;
        case 0x98: cout << ""; break;
        case 0x99: cout << ""; break;
        case 0x9A: cout << ""; break;
        case 0x9B: cout << ""; break;
        case 0x9C: cout << ""; break;
        case 0x9D: cout << ""; break;
        case 0x9E: cout << ""; break;
        case 0x9F: cout << ""; break;
        case 0xA0: cout << ""; break;
        case 0xA1: cout << ""; break;
        case 0xA2: cout << ""; break;
        case 0xA3: cout << ""; break;
        case 0xA4: cout << ""; break;
        case 0xA5: cout << ""; break;
        case 0xA6: cout << ""; break;
        case 0xA7: cout << ""; break;
        case 0xA8: cout << ""; break;
        case 0xA9: cout << ""; break;
        case 0xAA: cout << ""; break;
        case 0xAB: cout << ""; break;
        case 0xAC: cout << ""; break;
        case 0xAD: cout << ""; break;
        case 0xAE: cout << ""; break;
        case 0xAF: cout << ""; break;
        case 0xB0: cout << ""; break;
        case 0xB1: cout << ""; break;
        case 0xB2: cout << ""; break;
        case 0xB3: cout << ""; break;
        case 0xB4: cout << ""; break;
        case 0xB5: cout << ""; break;
        case 0xB6: cout << ""; break;
        case 0xB7: cout << ""; break;
        case 0xB8: cout << ""; break;
        case 0xB9: cout << ""; break;
        case 0xBA: cout << ""; break;
        case 0xBB: cout << ""; break;
        case 0xBC: cout << ""; break;
        case 0xBD: cout << ""; break;
        case 0xBE: cout << ""; break;
        case 0xBF: cout << ""; break;
        case 0xC0: cout << ""; break;
        case 0xC1: cout << ""; break;
        case 0xC2: cout << ""; break;
        case 0xC3: cout << ""; break;
        case 0xC4: cout << ""; break;
        case 0xC5: cout << ""; break;
        case 0xC6: cout << ""; break;
        case 0xC7: cout << ""; break;
        case 0xC8: cout << ""; break;
        case 0xC9: cout << ""; break;
        case 0xCA: cout << ""; break;
        case 0xCB: cout << ""; break;
        case 0xCC: cout << ""; break;
        case 0xCD: cout << ""; break;
        case 0xCE: cout << ""; break;
        case 0xCF: cout << ""; break;
        case 0xD0: cout << ""; break;
        case 0xD1: cout << ""; break;
        case 0xD2: cout << ""; break;
        case 0xD3: cout << ""; break;
        case 0xD4: cout << ""; break;
        case 0xD5: cout << ""; break;
        case 0xD6: cout << ""; break;
        case 0xD7: cout << ""; break;
        case 0xD8: cout << ""; break;
        case 0xD9: cout << ""; break;
        case 0xDA: cout << ""; break;
        case 0xDB: cout << ""; break;
        case 0xDC: cout << ""; break;
        case 0xDD: cout << ""; break;
        case 0xDE: cout << ""; break;
        case 0xDF: cout << ""; break;
        case 0xE0: cout << ""; break;
        case 0xE1: cout << ""; break;
        case 0xE2: cout << ""; break;
        case 0xE3: cout << ""; break;
        case 0xE4: cout << ""; break;
        case 0xE5: cout << ""; break;
        case 0xE6: cout << ""; break;
        case 0xE7: cout << ""; break;
        case 0xE8: cout << ""; break;
        case 0xE9: cout << ""; break;
        case 0xEA: cout << ""; break;
        case 0xEB: cout << ""; break;
        case 0xEC: cout << ""; break;
        case 0xED: cout << ""; break;
        case 0xEE: cout << ""; break;
        case 0xEF: cout << ""; break;
        case 0xF0: cout << ""; break;
        case 0xF1: cout << ""; break;
        case 0xF2: cout << ""; break;
        case 0xF3: cout << ""; break;
        case 0xF4: cout << ""; break;
        case 0xF5: cout << ""; break;
        case 0xF6: cout << ""; break;
        case 0xF7: cout << ""; break;
        case 0xF8: cout << ""; break;
        case 0xF9: cout << ""; break;
        case 0xFA: cout << ""; break;
        case 0xFB: cout << ""; break;
        case 0xFC: cout << ""; break;
        case 0xFD: cout << ""; break;
        case 0xFE: cout << ""; break;
        case 0xFF: cout << ""; break;
    }

    return opbytes;

}



// case 0x00: cout << ""; break;
// case 0x01: cout << ""; break;
// case 0x02: cout << ""; break;
// case 0x03: cout << ""; break;
// case 0x04: cout << ""; break;
// case 0x05: cout << ""; break;
// case 0x06: cout << ""; break;
// case 0x07: cout << ""; break;
// case 0x08: cout << ""; break;
// case 0x09: cout << ""; break;
// case 0x0A: cout << ""; break;
// case 0x0B: cout << ""; break;
// case 0x0C: cout << ""; break;
// case 0x0D: cout << ""; break;
// case 0x0E: cout << ""; break;
// case 0x0F: cout << ""; break;
// case 0x10: cout << ""; break;
// case 0x11: cout << ""; break;
// case 0x12: cout << ""; break;
// case 0x13: cout << ""; break;
// case 0x14: cout << ""; break;
// case 0x15: cout << ""; break;
// case 0x16: cout << ""; break;
// case 0x17: cout << ""; break;
// case 0x18: cout << ""; break;
// case 0x19: cout << ""; break;
// case 0x1A: cout << ""; break;
// case 0x1B: cout << ""; break;
// case 0x1C: cout << ""; break;
// case 0x1D: cout << ""; break;
// case 0x1E: cout << ""; break;
// case 0x1F: cout << ""; break;
// case 0x20: cout << ""; break;
// case 0x21: cout << ""; break;
// case 0x22: cout << ""; break;
// case 0x23: cout << ""; break;
// case 0x24: cout << ""; break;
// case 0x25: cout << ""; break;
// case 0x26: cout << ""; break;
// case 0x27: cout << ""; break;
// case 0x28: cout << ""; break;
// case 0x29: cout << ""; break;
// case 0x2A: cout << ""; break;
// case 0x2B: cout << ""; break;
// case 0x2C: cout << ""; break;
// case 0x2D: cout << ""; break;
// case 0x2E: cout << ""; break;
// case 0x2F: cout << ""; break;
// case 0x30: cout << ""; break;
// case 0x31: cout << ""; break;
// case 0x32: cout << ""; break;
// case 0x33: cout << ""; break;
// case 0x34: cout << ""; break;
// case 0x35: cout << ""; break;
// case 0x36: cout << ""; break;
// case 0x37: cout << ""; break;
// case 0x38: cout << ""; break;
// case 0x39: cout << ""; break;
// case 0x3A: cout << ""; break;
// case 0x3B: cout << ""; break;
// case 0x3C: cout << ""; break;
// case 0x3D: cout << ""; break;
// case 0x3E: cout << ""; break;
// case 0x3F: cout << ""; break;
// case 0x40: cout << ""; break;
// case 0x41: cout << ""; break;
// case 0x42: cout << ""; break;
// case 0x43: cout << ""; break;
// case 0x44: cout << ""; break;
// case 0x45: cout << ""; break;
// case 0x46: cout << ""; break;
// case 0x47: cout << ""; break;
// case 0x48: cout << ""; break;
// case 0x49: cout << ""; break;
// case 0x4A: cout << ""; break;
// case 0x4B: cout << ""; break;
// case 0x4C: cout << ""; break;
// case 0x4D: cout << ""; break;
// case 0x4E: cout << ""; break;
// case 0x4F: cout << ""; break;
// case 0x50: cout << ""; break;
// case 0x51: cout << ""; break;
// case 0x52: cout << ""; break;
// case 0x53: cout << ""; break;
// case 0x54: cout << ""; break;
// case 0x55: cout << ""; break;
// case 0x56: cout << ""; break;
// case 0x57: cout << ""; break;
// case 0x58: cout << ""; break;
// case 0x59: cout << ""; break;
// case 0x5A: cout << ""; break;
// case 0x5B: cout << ""; break;
// case 0x5C: cout << ""; break;
// case 0x5D: cout << ""; break;
// case 0x5E: cout << ""; break;
// case 0x5F: cout << ""; break;
// case 0x60: cout << ""; break;
// case 0x61: cout << ""; break;
// case 0x62: cout << ""; break;
// case 0x63: cout << ""; break;
// case 0x64: cout << ""; break;
// case 0x65: cout << ""; break;
// case 0x66: cout << ""; break;
// case 0x67: cout << ""; break;
// case 0x68: cout << ""; break;
// case 0x69: cout << ""; break;
// case 0x6A: cout << ""; break;
// case 0x6B: cout << ""; break;
// case 0x6C: cout << ""; break;
// case 0x6D: cout << ""; break;
// case 0x6E: cout << ""; break;
// case 0x6F: cout << ""; break;
// case 0x70: cout << ""; break;
// case 0x71: cout << ""; break;
// case 0x72: cout << ""; break;
// case 0x73: cout << ""; break;
// case 0x74: cout << ""; break;
// case 0x75: cout << ""; break;
// case 0x76: cout << ""; break;
// case 0x77: cout << ""; break;
// case 0x78: cout << ""; break;
// case 0x79: cout << ""; break;
// case 0x7A: cout << ""; break;
// case 0x7B: cout << ""; break;
// case 0x7C: cout << ""; break;
// case 0x7D: cout << ""; break;
// case 0x7E: cout << ""; break;
// case 0x7F: cout << ""; break;
// case 0x80: cout << ""; break;
// case 0x81: cout << ""; break;
// case 0x82: cout << ""; break;
// case 0x83: cout << ""; break;
// case 0x84: cout << ""; break;
// case 0x85: cout << ""; break;
// case 0x86: cout << ""; break;
// case 0x87: cout << ""; break;
// case 0x88: cout << ""; break;
// case 0x89: cout << ""; break;
// case 0x8A: cout << ""; break;
// case 0x8B: cout << ""; break;
// case 0x8C: cout << ""; break;
// case 0x8D: cout << ""; break;
// case 0x8E: cout << ""; break;
// case 0x8F: cout << ""; break;
// case 0x90: cout << ""; break;
// case 0x91: cout << ""; break;
// case 0x92: cout << ""; break;
// case 0x93: cout << ""; break;
// case 0x94: cout << ""; break;
// case 0x95: cout << ""; break;
// case 0x96: cout << ""; break;
// case 0x97: cout << ""; break;
// case 0x98: cout << ""; break;
// case 0x99: cout << ""; break;
// case 0x9A: cout << ""; break;
// case 0x9B: cout << ""; break;
// case 0x9C: cout << ""; break;
// case 0x9D: cout << ""; break;
// case 0x9E: cout << ""; break;
// case 0x9F: cout << ""; break;
// case 0xA0: cout << ""; break;
// case 0xA1: cout << ""; break;
// case 0xA2: cout << ""; break;
// case 0xA3: cout << ""; break;
// case 0xA4: cout << ""; break;
// case 0xA5: cout << ""; break;
// case 0xA6: cout << ""; break;
// case 0xA7: cout << ""; break;
// case 0xA8: cout << ""; break;
// case 0xA9: cout << ""; break;
// case 0xAA: cout << ""; break;
// case 0xAB: cout << ""; break;
// case 0xAC: cout << ""; break;
// case 0xAD: cout << ""; break;
// case 0xAE: cout << ""; break;
// case 0xAF: cout << ""; break;
// case 0xB0: cout << ""; break;
// case 0xB1: cout << ""; break;
// case 0xB2: cout << ""; break;
// case 0xB3: cout << ""; break;
// case 0xB4: cout << ""; break;
// case 0xB5: cout << ""; break;
// case 0xB6: cout << ""; break;
// case 0xB7: cout << ""; break;
// case 0xB8: cout << ""; break;
// case 0xB9: cout << ""; break;
// case 0xBA: cout << ""; break;
// case 0xBB: cout << ""; break;
// case 0xBC: cout << ""; break;
// case 0xBD: cout << ""; break;
// case 0xBE: cout << ""; break;
// case 0xBF: cout << ""; break;
// case 0xC0: cout << ""; break;
// case 0xC1: cout << ""; break;
// case 0xC2: cout << ""; break;
// case 0xC3: cout << ""; break;
// case 0xC4: cout << ""; break;
// case 0xC5: cout << ""; break;
// case 0xC6: cout << ""; break;
// case 0xC7: cout << ""; break;
// case 0xC8: cout << ""; break;
// case 0xC9: cout << ""; break;
// case 0xCA: cout << ""; break;
// case 0xCB: cout << ""; break;
// case 0xCC: cout << ""; break;
// case 0xCD: cout << ""; break;
// case 0xCE: cout << ""; break;
// case 0xCF: cout << ""; break;
// case 0xD0: cout << ""; break;
// case 0xD1: cout << ""; break;
// case 0xD2: cout << ""; break;
// case 0xD3: cout << ""; break;
// case 0xD4: cout << ""; break;
// case 0xD5: cout << ""; break;
// case 0xD6: cout << ""; break;
// case 0xD7: cout << ""; break;
// case 0xD8: cout << ""; break;
// case 0xD9: cout << ""; break;
// case 0xDA: cout << ""; break;
// case 0xDB: cout << ""; break;
// case 0xDC: cout << ""; break;
// case 0xDD: cout << ""; break;
// case 0xDE: cout << ""; break;
// case 0xDF: cout << ""; break;
// case 0xE0: cout << ""; break;
// case 0xE1: cout << ""; break;
// case 0xE2: cout << ""; break;
// case 0xE3: cout << ""; break;
// case 0xE4: cout << ""; break;
// case 0xE5: cout << ""; break;
// case 0xE6: cout << ""; break;
// case 0xE7: cout << ""; break;
// case 0xE8: cout << ""; break;
// case 0xE9: cout << ""; break;
// case 0xEA: cout << ""; break;
// case 0xEB: cout << ""; break;
// case 0xEC: cout << ""; break;
// case 0xED: cout << ""; break;
// case 0xEE: cout << ""; break;
// case 0xEF: cout << ""; break;
// case 0xF0: cout << ""; break;
// case 0xF1: cout << ""; break;
// case 0xF2: cout << ""; break;
// case 0xF3: cout << ""; break;
// case 0xF4: cout << ""; break;
// case 0xF5: cout << ""; break;
// case 0xF6: cout << ""; break;
// case 0xF7: cout << ""; break;
// case 0xF8: cout << ""; break;
// case 0xF9: cout << ""; break;
// case 0xFA: cout << ""; break;
// case 0xFB: cout << ""; break;
// case 0xFC: cout << ""; break;
// case 0xFD: cout << ""; break;
// case 0xFE: cout << ""; break;
// case 0xFF: cout << ""; break;
