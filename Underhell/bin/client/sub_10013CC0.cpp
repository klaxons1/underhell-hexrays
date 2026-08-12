int __thiscall sub_10013CC0(int this)
{
  double v2; // st7
  int v3; // eax
  int (*v4)(void); // edx
  int v5; // ebx
  int v6; // eax
  int v8; // [esp+Ch] [ebp-4h]

  sub_10035C70(2, 0);
  sub_1008FA90(2);
  sub_1008FB60(*(unsigned __int16 *)(this + 388) | 0x10);
  *(float *)(this + 496) = 1.0;
  if ( *(_BYTE *)(this + 3964) )
  {
    (**(void (__thiscall ***)(int, int))(this + 3960))(this + 3960, this + 3964);
    *(_BYTE *)(this + 3964) = 0;
  }
  *(_DWORD *)(this + 136) = 100;
  *(_WORD *)(this + 134) = 2;
  *(_BYTE *)(this + 3680) = 1;
  v2 = *(float *)(dword_10434B54 + 44);
  *(_BYTE *)(this + 3688) = 1;
  *(float *)(this + 3684) = v2;
  *(_BYTE *)(this + 84) = 0;
  *(float *)(this + 3016) = *((float *)off_103DC81C + 3);
  *(float *)(this + 4144) = 0.0;
  v8 = dword_1047CA8C;
  (*(void (**)(void))(*(_DWORD *)dword_1047CA8C + 100))();
  v3 = sub_10029CF0(1);
  sub_10029860(v3);
  v4 = *(int (**)(void))(*(_DWORD *)dword_10412D50 + 120);
  if ( (*(_BYTE *)(this + 732) & 2) != 0 )
  {
    v5 = v4() + 48;
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50) + 36;
  }
  else
  {
    v5 = v4() + 24;
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50) + 12;
  }
  sub_1008FC00(v6, v5);
  *(float *)(this + 3548) = 0.0;
  sub_1000A4C0((_DWORD *)this, 0);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
}
