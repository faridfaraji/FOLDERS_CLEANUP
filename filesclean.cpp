#include <fstream>
#include <iostream>
#include "filesclean.hpp"
#include "boost/filesystem.hpp"
namespace fs = boost::filesystem;
using namespace fs;

unsigned int read_unsigned_le(const char *buffer, int position, int num_bytes) {
  long number = 0;
  while (num_bytes-- > 0) {
    number = (number << 8) | (buffer[num_bytes + position] & 0xff);
  }
  return number;
}



void clean_download(){


 path dow_path("/Users/faridfaraji/Downloads");
 

 
    for(auto& p: fs::directory_iterator(dow_path)){
    path new_path(p);
    path b_filename = new_path.filename();
    path filename = new_path.stem(); 
    filename.string();
    b_filename.string();
    if(is_regular_file(new_path)){
        if(!filename.empty()){
            std::string extension = fs::extension(b_filename);
            std::cout << extension << '\n';
       //     const char *cstr = extension.c_str();
       
       // int exten = read_unsigned_le(cstr,0,4);   
       // std::cout << ".pdf in integer" << read_unsigned_le(".pdf",0,4) << '\n'; 
       // std::cout << "found .pdf in integer" << read_unsigned_le(cstr,0,4) << '\n';
       try{ 
        
           AllType type = mapStringToAllType.at(extension);
          manage_file(new_path, type);    
       
       }
     catch(const std::out_of_range& e){
         std::cout << new_path << '\n'<<"Out of range error occured" << '\n';
     }


    }
 }
}
}
void manage_file(fs::path filepath,AllType type){
 switch(type){
            //TEXT
           
            case AllType::pdf:
                manage_textfile(filepath);
                std::cout << "GOT THE PDF" << '\n';
                break;
           
            case AllType::txt:
                manage_textfile(filepath);
                break;
            
            case AllType::doc:
                manage_textfile(filepath);   
                break;
            case AllType::wpd:
                manage_textfile(filepath);
                break; 
            case AllType::docx:
                manage_textfile(filepath);
                break;
            case AllType::odt:
                manage_textfile(filepath);
                break;
            case AllType::wks:
                manage_textfile(filepath);
                break;
          ///IMAGE      
            case AllType::jpeg:
                manage_Imagefile(filepath);
                break;
            case AllType::jpg:
                manage_Imagefile(filepath);
                break;
            
            case AllType::png:   
                manage_Imagefile(filepath);
                break;
            case AllType::ps:
                manage_Imagefile(filepath);
                break; 
            case AllType::psd:
                manage_Imagefile(filepath);
                break;
            case AllType::svg:
                manage_Imagefile(filepath);
                break;
            //Audio                 
            case AllType::mp3:
                manage_Audiofile(filepath);
                 break;

            case AllType::mpa:
                 manage_Audiofile(filepath);
                 break;

            case AllType::cda:
                 manage_Audiofile(filepath);
                 break;

            case AllType::aif:
                 manage_Audiofile(filepath);
                 break;
            //Video                 
            case AllType::mov:
                 manage_Videofile(filepath);
                std::cout << "GOT TO THE VIDEO" << '\n';
                 break;

            case AllType::mp4:
                 manage_Videofile(filepath);
                 break;

            case AllType::mpg:
                 manage_Videofile(filepath);
                 break;

           case AllType::mpeg:
                 manage_Videofile(filepath);
                 break;
           case AllType::dmg:
                 manage_disk(filepath);
                 break;
           case AllType::iso:
                 manage_disk(filepath);
                 break;
           case AllType::toast:
                 manage_disk(filepath);
                 break;
           case AllType::vcd:
                 manage_disk(filepath);
                 break;
           case AllType::bin:
                 manage_disk(filepath);
                 break;
           default: 
                 break;
                         
       }}



int manage_textfile(path filepath){
 path filename = filepath.filename();   
 int size = file_size(filepath);   
 if (size > 1000000){
 rename(filepath, "/Users/faridfaraji/Downloads/BOOKS"/filename);
 return 0;
 }
 rename(filepath, "/Users/faridfaraji/Downloads/DOCS"/filename);
 
 //std::cout << filepath << '\n' << size << '\n';
 return 0;

}


int manage_Imagefile(path filepath){

return 0;

}

int manage_Audiofile(path filepath){

return 0;

}
 

int manage_Videofile(path filepath){
    path filename = filepath.filename();
    rename(filepath, "/Users/faridfaraji/Downloads/VIDEOS"/filename);
    return 0;

}


int manage_disk(path filepath){
    path filename = filepath.filename();
    rename(filepath, "/Users/faridfaraji/Downloads/DISKS"/filename);

    return 0;
}
