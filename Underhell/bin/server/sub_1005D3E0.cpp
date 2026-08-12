int __thiscall sub_1005D3E0(char *this)
{
  int v2; // eax

  this[104] = 1;
  sub_100B8C40(this + 160, this + 164);
  sub_100B8C60(this + 168, this + 172);
  sub_100B8BE0(*((_DWORD *)this + 20), *((_DWORD *)this + 21));
  sub_100B8C00(*((float *)this + 18), *((float *)this + 19));
  sub_100B8C80(1);
  v2 = *((_DWORD *)this + 1);
  *((float *)this + 27) = *(float *)(v2 + 2896);
  *(float *)(v2 + 2896) = 3.4028235e38;
  *((float *)this + 34) = 8.0;
  *((float *)this + 33) = *(float *)(dword_106B31C8 + 12) + 8.0;
  *((float *)this + 38) = 8.0;
  *((float *)this + 39) = 16.0;
  *((float *)this + 37) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                            dword_106B31E4,
                            8.0,
                            16.0)
                        + *(float *)(dword_106B31C8 + 12);
  return (*(int (__thiscall **)(char *))(*(_DWORD *)this + 280))(this);
}
