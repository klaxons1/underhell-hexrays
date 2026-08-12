void __thiscall sub_100EAAE0(_DWORD **this, char *a2)
{
  float *v2; // eax
  void *v3; // eax
  void *v4; // eax
  int v6[3]; // [esp+28h] [ebp-38h] BYREF
  float v7[3]; // [esp+34h] [ebp-2Ch] BYREF
  float v8[4]; // [esp+40h] [ebp-20h] BYREF
  char *v9; // [esp+50h] [ebp-10h]
  float v10[3]; // [esp+54h] [ebp-Ch] BYREF

  if ( a2 )
  {
    v9 = a2;
    sub_10008F60(v7);
    sub_10008F60(v8);
    sub_100EC070(v7);
    v2 = (float *)sub_1004AB90(v9);
    sub_100EAA30(v2, v10, v7);
    if ( this[1] )
    {
      v3 = sub_10008F60(v10);
      (*(void (__thiscall **)(_DWORD *, void *, int))(*this[1] + 48))(this[1], v3, 3);
    }
    if ( this[2] )
    {
      sub_10008F70(v8, (float *)v6, v8[3]);
      v4 = sub_10008F60(v6);
      (*(void (__thiscall **)(_DWORD *, void *, int))(*this[2] + 48))(this[2], v4, 3);
    }
  }
}
