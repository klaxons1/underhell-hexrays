void __thiscall sub_102F1900(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  __int64 v7; // [esp+8h] [ebp-8Ch]
  float v8; // [esp+8h] [ebp-8Ch]
  _BYTE v9[80]; // [esp+20h] [ebp-74h] BYREF
  float v10[3]; // [esp+70h] [ebp-24h] BYREF
  float v11[3]; // [esp+7Ch] [ebp-18h] BYREF
  float v12[3]; // [esp+88h] [ebp-Ch] BYREF

  sub_10211780((int)this, a2, a3);
  HIDWORD(v7) = this - 281;
  LODWORD(v7) = a2;
  sub_1010DD80(this + 146, v7, 0.0);
  if ( a3 == 1 && this[145] != 1 )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 508))(a2);
    sub_104222B0(v4, v11, 0, 0);
    sub_101FB550(v10, (int)(this - 281), v11, 2);
    v5 = *(this - 175);
    v12[0] = 0.0;
    v12[1] = 0.0;
    v12[2] = 0.0;
    if ( v5 )
      (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v5 + 208))(v5, v10, v12);
    v8 = (float)(int)*(this - 226);
    v6 = (_DWORD *)sub_10248110((int)v9, a2, a2, v8, 0, 0);
    sub_100D9E70(this - 281, (int)this, v6);
  }
}
