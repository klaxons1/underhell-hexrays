int __thiscall sub_101B5A90(_DWORD *this, const void *a2)
{
  int v3; // esi
  int result; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  double v8; // st7
  double v9; // st7
  void (__thiscall *v10)(int, float *, float *); // eax
  float v11; // [esp+Ch] [ebp-1Ch] BYREF
  float v12; // [esp+10h] [ebp-18h]
  float v13; // [esp+14h] [ebp-14h]
  float v14; // [esp+18h] [ebp-10h] BYREF
  float v15; // [esp+1Ch] [ebp-Ch]
  float v16; // [esp+20h] [ebp-8h]
  _DWORD *v17; // [esp+24h] [ebp-4h]

  ++this[87];
  qmemcpy(this + 19, a2, 0x20u);
  v3 = 0;
  result = (int)(this + 27);
  this[45] = 0;
  this[46] = 0;
  v17 = this + 27;
  do
  {
    v5 = *((_DWORD *)a2 + v3);
    if ( v5 )
    {
      if ( ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 76))(*((_DWORD *)a2 + v3)) & 4) != 0 )
      {
        v6 = *((_DWORD *)a2 + (v3 == 0));
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 68))(v6);
        if ( v7 )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 320))(v7) )
          {
            (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v5 + 204))(v5, &v11, &v14);
            v8 = off_10689714();
            if ( v8 <= 10.0 )
              v8 = 10.0;
            v11 = v11 * v8;
            v12 = v12 * v8;
            v13 = v8 * v13;
            v9 = off_10689714();
            if ( v9 <= 1.0 )
              v9 = 1.0;
            v10 = *(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v5 + 196);
            v14 = v14 * v9;
            v15 = v15 * v9;
            v16 = v9 * v16;
            v10(v5, &v11, &v14);
          }
        }
      }
      result = (*(int (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)v5 + 204))(v5, v17, v17 + 12);
    }
    v17 += 3;
    ++v3;
  }
  while ( v3 < 2 );
  --this[87];
  return result;
}
