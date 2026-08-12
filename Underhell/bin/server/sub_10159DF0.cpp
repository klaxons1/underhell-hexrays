int __thiscall sub_10159DF0(int *this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  float *v5; // eax
  int v6; // edx
  double v7; // st7
  double (__thiscall *v8)(int); // eax
  double v9; // st7
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int (__thiscall *v13)(int *, int *, float *, int, _BYTE *); // edx
  float *v14; // esi
  _BYTE v15[84]; // [esp+4h] [ebp-80h] BYREF
  float v16[3]; // [esp+58h] [ebp-2Ch] BYREF
  float v17; // [esp+64h] [ebp-20h]
  float v18; // [esp+68h] [ebp-1Ch]
  float v19; // [esp+6Ch] [ebp-18h]
  float v20; // [esp+70h] [ebp-14h] BYREF
  float v21; // [esp+74h] [ebp-10h]
  float v22; // [esp+78h] [ebp-Ch]
  int v23; // [esp+7Ch] [ebp-8h] BYREF
  int v24; // [esp+80h] [ebp-4h]

  v24 = -1;
  sub_10157240();
  v2 = *(_DWORD *)(*(int (__thiscall **)(int *, int *, int, int, _BYTE *))(*this + 184))(
                    this,
                    &v23,
                    this[2] + 152,
                    8,
                    v15);
  v24 = v2;
  if ( v2 == -1 )
  {
    *(_DWORD *)(this[1] + 2176) = 0;
    return 0;
  }
  else
  {
    if ( *(_DWORD *)(dword_106CE684 + 48) )
    {
      v4 = (**(int (__thiscall ***)(int, int))dword_106B6E60)(dword_106B6E60, v2);
      (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_106B31D0 + 184))(
        dword_106B31D0,
        1,
        "%s stuck on object %i/%s",
        "server",
        v24 & 0xFFF,
        v4);
    }
    v5 = (float *)this[2];
    v6 = *(_DWORD *)dword_106B31D0;
    v17 = v5[38];
    v18 = v5[39];
    v7 = v5[40];
    v8 = *(double (__thiscall **)(int))(v6 + 196);
    v19 = v7;
    v9 = v8(dword_106B31D0);
    v10 = this[1];
    *(float *)&v23 = v9;
    v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v10 + 24));
    if ( *(float *)&v23 - 0.05 <= *(float *)&this[2 * v11 + 227] )
      return 1;
    v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
            dword_106B31D0,
            *(_DWORD *)(this[1] + 24));
    this[2 * v12 + 227] = v23;
    (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)dword_106B6E60 + 8))(dword_106B6E60, v15, this[2] + 64);
    sub_10157490(this[1], v16);
    v13 = *(int (__thiscall **)(int *, int *, float *, int, _BYTE *))(*this + 184);
    v20 = v16[0] + v17;
    v21 = v16[1] + v18;
    v22 = v16[2] + v19;
    if ( *(_DWORD *)v13(this, &v23, &v20, 8, v15) == -1 )
    {
      *(_DWORD *)(this[1] + 2176) = 0;
      v14 = (float *)this[2];
      v14[38] = v20;
      result = 0;
      v14[39] = v21;
      v14[40] = v22;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
