int __thiscall sub_1024DA50(_DWORD *this, int a2)
{
  int result; // eax
  float *v4; // ecx

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 264))(a2);
    if ( (_BYTE)result )
    {
      v4 = (float *)this[200];
      result = *((_DWORD *)v4 + 200);
      if ( result == 1 )
      {
        return (*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 728))(v4);
      }
      else if ( !result )
      {
        return sub_100D8290(v4, 1.0);
      }
    }
  }
  return result;
}
