int __thiscall sub_103AD410(int this)
{
  int v2; // edx
  int v3; // ebx
  double v4; // st7
  int (__thiscall *v5)(int); // eax
  int result; // eax
  int v7; // ecx

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/stalker.mdl");
  *(_DWORD *)(this + 1676) = 0;
  sub_10027A90(this, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_100E0970(this, v2, 3, 0);
  *(_DWORD *)(this + 1680) = -1;
  v3 = (int)*(float *)(dword_106EAC44 + 44);
  if ( *(_DWORD *)(this + 220) != v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = v3;
  }
  *(float *)(this + 1684) = 0.1;
  *(_DWORD *)(this + 2324) = 0;
  sub_10020460((_DWORD *)this, 67108865);
  sub_10020460((_DWORD *)this, 0x20000);
  *(float *)(this + 3652) = 0.0;
  v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.0,
         10.0);
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)this + 1164);
  *(float *)(this + 3656) = v4 + *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 3660) = 0.0;
  *(float *)(this + 3708) = 0.0;
  *(float *)(this + 3712) = 0.0;
  *(float *)(this + 3716) = 0.0;
  *(float *)(this + 3696) = 0.0;
  *(float *)(this + 3700) = 0.0;
  *(float *)(this + 3704) = 0.0;
  result = v5(this);
  v7 = *(_DWORD *)(this + 2404);
  *(float *)(this + 2896) = 3600.0;
  *(_DWORD *)(this + 3728) = 0;
  *(float *)(v7 + 8) = 3599.0;
  return result;
}
