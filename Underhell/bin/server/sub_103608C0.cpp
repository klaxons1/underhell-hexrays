int __thiscall sub_103608C0(int this)
{
  void (*v2)(void); // edx
  int v3; // edx
  int result; // eax

  v2 = *(void (**)(void))(*(_DWORD *)this + 100);
  *(_BYTE *)(this + 4604) = 1;
  v2();
  *(_DWORD *)(this + 1708) = -1;
  *(_DWORD *)(this + 1740) = 0;
  *(_BYTE *)(this + 1713) = 0;
  j_nullsub_4((void *)this);
  sub_100E88A0((_DWORD *)this, 0);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/dog.mdl");
  *(_DWORD *)(this + 1676) = 2;
  sub_10027A90(this, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_100E0970(this, v3, 3, 0);
  sub_100CF450((_DWORD *)this, 3);
  if ( *(_DWORD *)(this + 220) != 999 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 999;
  }
  *(float *)(this + 1684) = 0.5;
  *(_DWORD *)(this + 2324) = 0;
  if ( *(_BYTE *)(this + 225) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 0;
  }
  sub_10020460((_DWORD *)this, 8394753);
  sub_10020460((_DWORD *)this, 0x2000000);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1164))(this);
  result = sub_100BEF30(this, "physgun");
  *(float *)(this + 4276) = 1.0;
  *(_WORD *)(this + 4196) = 0;
  *(_DWORD *)(this + 4192) = result;
  *(_WORD *)(this + 4288) = 256;
  *(float *)(this + 4172) = *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 4284) = *(float *)(dword_106B31C8 + 12);
  return result;
}
