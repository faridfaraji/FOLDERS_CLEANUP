#include <fstream>
#include <iostream>
#include <map>
#include "boost/filesystem.hpp"

namespace fs = boost::filesystem;
using namespace fs;

enum class AudioType{
    aif,cda,mp3,mpa
};

enum class TextType{

    txt,wks,doc,docx,odt,wpd,pdf
};

enum class ImageType{

  ai, bmp, gif, ico, jpeg, jpg, 
  png, ps, psd, svg, tif, tiff

};

enum class VideoType{
 g2_3, gp_3, avi, flv, h264, m4v, mkv, 
 mov, mp4, mpg, mpeg, rm, swf, vob, wmv
};

enum class AllType{
 
  ai, bmp, gif, ico, jpeg, jpg, 
  png, ps, psd, svg, tif, tiff,
  g2_3, gp_3, avi, flv, h264, m4v, mkv, 
  mov, mp4, mpg, mpeg, rm, swf, vob, wmv,
  txt,wks,doc,docx,odt,wpd,pdf,
 aif,cda,mp3,mpa,bin, dmg, iso, toast,vcd
      
};


const std::map<std::string, AllType> mapStringToAllType =
{
    { ".mp3", AllType::mp3 },
    { ".mpa", AllType::mpa },
    { ".cda", AllType::cda },
    { ".aif", AllType::aif},
    { ".pdf", AllType::pdf },
    { ".txt", AllType::txt },
    { ".doc", AllType::doc },
    { ".wpd", AllType::wpd },
    {".ai", AllType::ai},
    {".bmp", AllType::bmp },
    {".gif", AllType::gif},
    {".ico", AllType::ico},
    {".jpeg", AllType::jpeg},
    {".jpg", AllType::jpg},
    {".png", AllType::png},
    {".mov", AllType::mov},
    {".mp4", AllType::mp4 },
    {".mpg", AllType::mpg},
    {".mpeg", AllType::mpeg},
    {".rm", AllType::rm},
    {".swf", AllType::swf},
    {".vob", AllType::vob},
    {".wmv", AllType::wmv},
    {".mkv", AllType::mkv },
    {".m4v", AllType::m4v},
    {".h264", AllType::h264},
    {".flv", AllType::flv},
    {".avi", AllType::avi},
    {".3gp", AllType::gp_3},
    {".bin", AllType::bin},
    {".dmg", AllType::dmg},
    {".iso", AllType::iso},
    {".toast", AllType::toast},
    {".vcd", AllType::vcd}
 
};





const std::map<std::string, AudioType> mapStringToAudioType =
{
    { ".mp3", AudioType::mp3 },
    { ".mpa", AudioType::mpa },
    { ".cda", AudioType::cda },
    { ".aif", AudioType::aif},
};


const std::map<std::string, TextType> mapStringToTextType =
{
    { ".pdf", TextType::pdf },
    { ".txt", TextType::txt },
    { ".doc", TextType::doc },
    { ".wpd", TextType::wpd },
};

const std::map<std::string, ImageType> mapStringToImageType = 
{
    {".ai", ImageType::ai},
    {".bmp",ImageType::bmp },
    {".gif", ImageType::gif},
    {".ico", ImageType::ico},
    {".jpeg",ImageType::jpeg},
    {".jpg", ImageType::jpg},
    {".png", ImageType::png},

};


const std::map<std::string, VideoType> mapStringToVideoType = 
{
    {".mov", VideoType::mov},
    {".mp4",VideoType::mp4 },
    {".mpg", VideoType::mpg},
    {".mpeg", VideoType::mpeg},
    {".rm",VideoType::rm},
    {".swf", VideoType::swf},
    {".vob", VideoType::vob},
    {".wmv", VideoType::wmv},
    {".mkv",VideoType::mkv },
    {".m4v", VideoType::m4v},
    {".h264", VideoType::h264},
    {".flv",VideoType::flv},
    {".avi", VideoType::avi},
    {".3gp", VideoType::gp_3},
   

};


void manage_file(path filepasth, AllType type);

int manage_textfile(path filepath);
int manage_Imagefile(path filepath);
int manage_Audiofile(path filepath);
int manage_Videofile(path filepath);
int manage_disk(path filepath);


void clean_download();




