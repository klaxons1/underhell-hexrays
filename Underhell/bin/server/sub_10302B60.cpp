int __thiscall sub_10302B60(int this)
{
  int v2; // ebx
  int *v3; // ecx
  int v4; // eax
  double v5; // st7
  int v6; // edx
  bool v7; // zf
  int v8; // edx
  int *v9; // ecx
  int result; // eax
  int v11; // edi
  int *v12; // ecx
  float v13[3]; // [esp+Ch] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  if ( (*(_DWORD *)(this + 248) & 0x40000) != 0 )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/antlion_worker.mdl");
    v2 = *(_DWORD *)(this + 248) | 0x100;
    if ( *(_DWORD *)(this + 248) != v2 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 248) = v2;
        sub_100CF450((_DWORD *)this, 6);
        goto LABEL_10;
      }
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 248);
      *(_DWORD *)(this + 248) = v2;
    }
    sub_100CF450((_DWORD *)this, 6);
  }
  else
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/antlion.mdl");
    sub_100CF450((_DWORD *)this, 4);
  }
LABEL_10:
  *(_DWORD *)(this + 1676) = 5;
  sub_10027A90(this, 0);
  sub_10020F00((char *)this);
  sub_100223F0(0);
  v4 = *(_DWORD *)(this + 248) >> 18;
  *(_DWORD *)(this + 2324) = 0;
  if ( (v4 & 1) != 0 )
    v5 = *(float *)(dword_106E2BB4 + 44);
  else
    v5 = *(float *)(dword_106E2A4C + 44);
  v14 = (int)v5;
  if ( *(_DWORD *)(this + 220) != (int)v5 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = v14;
  }
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_100E0970(this, v6, 3, 0);
  if ( *(_DWORD *)(this + 2800) )
    sub_10020460((_DWORD *)this, 0x4000000);
  sub_100EBE30(this, 30);
  sub_10020460((_DWORD *)this, 1572867);
  if ( (*(_DWORD *)(this + 248) & 0x40000) != 0 )
    sub_10020460((_DWORD *)this, 0x20000);
  if ( (*(_DWORD *)(this + 248) & 0x20000) == 0 )
    sub_10020460((_DWORD *)this, 128);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1164))(this);
  if ( (*(_DWORD *)(this + 248) & 0x40000) != 0 )
  {
    v13[0] = 0.0;
    v13[1] = 0.0;
    v13[2] = 32.0;
    sub_100DC4E0((float *)this, v13);
  }
  v7 = *(_BYTE *)(this + 3652) == 0;
  *(float *)(this + 2896) = 3.4028235e38;
  *(_BYTE *)(this + 4113) = 0;
  if ( !v7 )
  {
    sub_100EAB80((_DWORD *)this, 32);
    sub_100EA940((int *)this, 0x8000);
    v8 = *(_DWORD *)(this + 248) | 2;
    v14 = v8;
    if ( *(_DWORD *)(this + 248) != v8 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v9 = *(int **)(this + 24);
        if ( v9 )
        {
          sub_100194B0(v9, 248);
          v8 = v14;
        }
      }
      *(_DWORD *)(this + 248) = v8;
    }
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
    if ( *(_BYTE *)(this + 225) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
      *(_BYTE *)(this + 225) = 0;
    }
    sub_1002B660(this, 1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106E2978);
    sub_100457E0((_DWORD *)this, 94);
    *(_DWORD *)(this + 200) = sub_10301C40;
  }
  *(_DWORD *)(this + 1708) = -1;
  *(_DWORD *)(this + 1740) = 0;
  *(_BYTE *)(this + 1713) = 0;
  j_nullsub_4((void *)this);
  sub_100E88A0((_DWORD *)this, 0);
  result = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3);
  v11 = result;
  if ( *(_DWORD *)(this + 848) != result )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 848) = v11;
    }
    else
    {
      v12 = *(int **)(this + 24);
      if ( v12 )
        result = sub_100194B0(v12, 848);
      *(_DWORD *)(this + 848) = v11;
    }
  }
  return result;
}
