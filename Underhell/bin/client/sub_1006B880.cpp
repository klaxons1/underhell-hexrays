void __thiscall sub_1006B880(int this)
{
  char v2; // cl
  unsigned __int8 v3; // al
  int v4; // eax
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  float *v9; // eax
  int v10; // [esp+14h] [ebp-4h]

  if ( *(float *)(this + 1180) > 0.0 )
  {
    v2 = *(_BYTE *)(this + 79);
    v3 = v2 * *(_BYTE *)(this + 78);
    LOBYTE(v10) = v2 * *(_BYTE *)(this + 76);
    BYTE1(v10) = v2 * *(_BYTE *)(this + 77);
    HIWORD(v10) = v3;
    if ( (_BYTE)v10 || v2 * *(_BYTE *)(this + 77) || v3 )
    {
      v4 = *(_DWORD *)(this + 1188);
      if ( !v4 || *(_DWORD *)(v4 + 36) != *(_DWORD *)(this + 68) )
        *(_DWORD *)(this + 1188) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413164 + 16))(
                                     dword_10413164,
                                     *(_DWORD *)(this + 68));
      *(float *)(*(_DWORD *)(this + 1188) + 16) = *(float *)(this + 1180) * 3.0;
      v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 12) + 36))(this - 12);
      v6 = *v5;
      v7 = v5[1];
      v8 = v5[2];
      v9 = *(float **)(this + 1188);
      v9[1] = v6;
      v9[2] = v7;
      v9[3] = v8 + 5.0;
      *(float *)(*(_DWORD *)(this + 1188) + 24) = *((float *)off_103DC81C + 3) + 0.050000001;
      *(_DWORD *)(*(_DWORD *)(this + 1188) + 20) = v10;
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(this - 12) + 408))(this - 12, -1293.0);
    }
  }
}
