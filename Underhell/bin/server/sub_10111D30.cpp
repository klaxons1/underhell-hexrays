void __thiscall sub_10111D30(char *this, char a2, float *a3, float *a4)
{
  if ( a2 )
    sub_10111B20(this, a3, a4);
  else
    (*(void (__thiscall **)(char *, float *, float *))(*(_DWORD *)this + 12))(this, a3, a4);
}
