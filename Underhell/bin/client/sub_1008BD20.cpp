void __thiscall sub_1008BD20(_DWORD *this, unsigned __int16 a2, int a3)
{
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // eax

  if ( !*((_BYTE *)this + 210) && a2 != 0xFFFF )
  {
    sub_1008AD20((int)(this + 55), (int)&a2);
    v4 = a3;
    if ( (_BYTE)a3 )
    {
      v5 = this[9];
      v6 = 168 * a2;
      *(float *)(v6 + v5 + 108) = 3.4028235e38;
      *(float *)(v6 + v5 + 112) = 3.4028235e38;
      *(float *)(v6 + v5 + 116) = 3.4028235e38;
    }
    v7 = sub_100855D0((int)this, a2);
    if ( v7 )
      (*(void (__thiscall **)(_DWORD *, int, int))(*this + 88))(this, v7, v4);
  }
}
