char __thiscall sub_10366E30(int this)
{
  int v2; // eax
  int v3; // ecx
  int (__thiscall *v4)(int); // eax
  int *v5; // eax
  double v6; // st7
  int v7; // ebx
  float *v8; // edi
  float *v9; // eax
  double v10; // st7
  float *v11; // eax
  double v12; // st6
  void (__noreturn ***v13)(); // eax
  double v14; // st7
  double v15; // st7
  char result; // al
  float v17; // [esp+0h] [ebp-6Ch]
  float v18; // [esp+4h] [ebp-68h]
  _DWORD v19[10]; // [esp+Ch] [ebp-60h] BYREF
  int v20; // [esp+34h] [ebp-38h]
  int v21; // [esp+38h] [ebp-34h]
  float v22; // [esp+40h] [ebp-2Ch]
  int v23; // [esp+4Ch] [ebp-20h]
  float v24[3]; // [esp+5Ch] [ebp-10h] BYREF
  int v25; // [esp+68h] [ebp-4h]

  sub_1032CF60(this);
  if ( sub_101C5260((_DWORD *)this) )
  {
    v2 = sub_101C5260((_DWORD *)this);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 220))(v2) == 12 )
    {
      sub_10247EC0(v19);
      v22 = (float)*(int *)(sub_101C5260((_DWORD *)this) + 220);
      if ( this )
      {
        v3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
        v4 = *(int (__thiscall **)(int))(*(_DWORD *)this + 8);
        v21 = v3;
        v20 = *(_DWORD *)v4(this);
      }
      else
      {
        v21 = -1;
        v20 = -1;
      }
      v23 = 0;
      v5 = (int *)sub_101C5260((_DWORD *)this);
      sub_100D9E70(v5, this, v19);
    }
  }
  if ( *(_DWORD *)(this + 3772) && *(float *)(this + 4012) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    v6 = 1.0;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) && *(_DWORD *)(this + 2324) == 3 )
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
      v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7);
      v24[0] = *v9 - *v8;
      v24[1] = v9[1] - v8[1];
      v10 = v9[2] - v8[2];
      v24[2] = v10;
      sub_100D7A40(v24);
      *(float *)&v25 = v10;
      v11 = sub_10023450((float *)this);
      v12 = *(float *)&v25 - *v11;
      v6 = 1.0;
    }
    else
    {
      v12 = 480.0;
      *(float *)(this + 4012) = *(float *)(this + 4012) + 1.0;
    }
    if ( v12 < 480.0 || v6 == *(float *)(this + 3984) )
    {
      if ( v12 >= 480.0 )
        goto LABEL_21;
      v15 = 1.0 - v12 * 0.002083333333333333;
      if ( v15 > 1.0 )
        v15 = 1.0;
      *(float *)(this + 3984) = v15;
      v25 = (int)(v15 * 60.0 + 70.0);
      v13 = sub_1023DBA0();
      v18 = 0.5;
      v14 = (double)v25;
    }
    else
    {
      *(float *)(this + 3984) = v6;
      v13 = sub_1023DBA0();
      v18 = 0.5;
      v14 = 35.0;
    }
    v17 = v14;
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, float))(*v13)[11])(
      v13,
      *(_DWORD *)(this + 3772),
      LODWORD(v17),
      COERCE_FLOAT(LODWORD(v18)));
LABEL_21:
    *(float *)(this + 4012) = *(float *)(dword_106B31C8 + 12) + 0.5;
  }
  if ( *(_BYTE *)(this + 3989) && !*(_BYTE *)(this + 3991) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    if ( *(float *)(this + 484) <= 0.0 )
      *(_BYTE *)(this + 3991) = 1;
  }
  result = sub_100697A0((_DWORD *)this, 188, 0);
  if ( result )
    return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  return result;
}
