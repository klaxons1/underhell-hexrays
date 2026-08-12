_DWORD *__thiscall sub_102564B0(_DWORD *this, int a2)
{
  int (__stdcall *v3)(int); // edx
  _DWORD *result; // eax
  char *v5; // eax
  int v6; // ebx
  char *v7; // eax
  float *v8; // edi
  float *v9; // eax
  int v10; // eax
  int (__thiscall *v11)(int, float *, int, _DWORD); // edx
  float v12; // [esp+8h] [ebp-1Ch]
  float v13; // [esp+Ch] [ebp-18h]
  float v14; // [esp+10h] [ebp-14h]
  float v15; // [esp+14h] [ebp-10h] BYREF
  float v16; // [esp+18h] [ebp-Ch]
  float v17; // [esp+1Ch] [ebp-8h]
  _DWORD *v18; // [esp+20h] [ebp-4h]

  v3 = *(int (__stdcall **)(int))(*this + 752);
  v18 = this;
  result = (_DWORD *)v3(a2);
  if ( (_BYTE)result )
  {
    v5 = (char *)this[53];
    if ( !v5 )
      v5 = (char *)String;
    result = sub_1012BF20(&dword_1069E3E0, 0, v5, 0, a2, a2, 0);
    v6 = (int)result;
    if ( result )
    {
      v7 = (char *)v18[273];
      v12 = 0.0;
      v8 = 0;
      v13 = 0.0;
      v14 = 0.0;
      if ( v7 )
      {
        v9 = (float *)sub_1012BF20(&dword_1069E3E0, 0, v7, 0, a2, a2, 0);
        v8 = v9;
        if ( v9 )
        {
          if ( ((_DWORD)v9[63] & 0x800) != 0 )
            sub_100DAE60((int)v9);
          if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
            sub_100DAE60(a2);
          v12 = *(float *)(a2 + 580) - v8[145];
          v13 = *(float *)(a2 + 584) - v8[146];
          v14 = *(float *)(a2 + 588) - v8[147];
        }
      }
      sub_101C73D0((unsigned int *)a2, 0);
      if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
        sub_100DAE60(v6);
      v15 = *(float *)(v6 + 580);
      v16 = *(float *)(v6 + 584);
      v17 = *(float *)(v6 + 588);
      if ( !v8 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
        v17 = v17 - *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 320) + 4))(a2 + 320) + 8);
      v10 = 0;
      if ( !v8 && (v18[62] & 0x20) == 0 )
      {
        if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
          sub_100DAE60(v6);
        v10 = v6 + 704;
      }
      v11 = *(int (__thiscall **)(int, float *, int, _DWORD))(*(_DWORD *)a2 + 416);
      v15 = v12 + v15;
      v16 = v16 + v13;
      v17 = v14 + v17;
      return (_DWORD *)v11(a2, &v15, v10, 0);
    }
  }
  return result;
}
