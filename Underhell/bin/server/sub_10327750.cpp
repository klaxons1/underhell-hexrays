int __thiscall sub_10327750(int this)
{
  int v2; // edx
  int v3; // ebx
  _BYTE *v4; // edi
  int v5; // eax
  double v6; // st7
  int v7; // ecx
  int *v8; // ecx
  float v10; // [esp+1Ch] [ebp-30h]
  float v11[3]; // [esp+30h] [ebp-1Ch] BYREF
  float v12[3]; // [esp+3Ch] [ebp-10h] BYREF
  float v13; // [esp+48h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/barnacle.mdl");
  v12[0] = 16.0;
  v12[1] = 16.0;
  v12[2] = 0.0;
  v11[0] = -16.0;
  v11[1] = -16.0;
  v11[2] = -40.0;
  sub_1025F360((_DWORD *)this, (int)v11, (int)v12);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_10112B00((_BYTE *)(this + 320), 4, 0, 0);
  sub_100E0970(this, v2, 7, 0);
  sub_100CF450((_DWORD *)this, 2);
  v3 = (int)*(float *)(dword_106E50D4 + 44);
  if ( *(_DWORD *)(this + 220) != v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = v3;
  }
  *(float *)(this + 1684) = 0.5;
  v4 = (_BYTE *)(this + 225);
  *(_DWORD *)(this + 2324) = 0;
  *(float *)(this + 3680) = 0.0;
  *(_DWORD *)(this + 3672) = 0;
  *(_WORD *)(this + 3676) = 0;
  *(_BYTE *)(this + 9956) = 0;
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *v4 = 2;
  }
  *(_DWORD *)(this + 9888) = 0;
  *(_DWORD *)(this + 9904) = 0;
  v5 = sub_100E9630((float *)this, 0, 0, 0);
  if ( v5 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 112))(v5, 500.0);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 800))(this);
  sub_10322DE0(this, (int)v4);
  sub_10020F00((char *)this);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 1);
  v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.80000001,
         1.2);
  v7 = *(_DWORD *)(this + 864);
  v13 = v6;
  if ( v7 != LODWORD(v13) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 864);
    }
    *(float *)(this + 864) = v13;
  }
  sub_100EC3F0((_DWORD *)this, (int)sub_10326980, 0.0, 0);
  v10 = *(float *)(dword_106B31C8 + 12) + 0.5;
  sub_100EC4A0((int *)this, v10, 0);
  *(float *)(this + 9928) = 80.0;
  sub_100EAB80((_DWORD *)this, 16);
  return sub_100EA940((int *)this, 0x10000);
}
