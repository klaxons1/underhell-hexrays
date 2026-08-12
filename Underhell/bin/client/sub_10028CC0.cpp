void __thiscall sub_10028CC0(_DWORD *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // esi
  int v8; // esi
  double v9; // st7
  double v10; // st7
  int v11; // [esp+14h] [ebp-30h]
  _BYTE v12[12]; // [esp+1Ch] [ebp-28h] BYREF
  float v13; // [esp+28h] [ebp-1Ch] BYREF
  float v14; // [esp+2Ch] [ebp-18h]
  float v15; // [esp+30h] [ebp-14h]
  float v16; // [esp+34h] [ebp-10h] BYREF
  float v17; // [esp+38h] [ebp-Ch]
  float v18; // [esp+3Ch] [ebp-8h]
  int v19; // [esp+40h] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 724))(this)
    || (v2 = this[281], v2 == -1)
    || (v3 = (int *)((char *)off_103DCD74 + 16 * (this[281] & 0xFFF) + 4),
        v4 = v2 >> 12,
        *((_DWORD *)off_103DCD74 + 4 * (this[281] & 0xFFF) + 2) != v4)
    || !*v3
    || (*((_DWORD *)off_103DCD74 + 4 * (this[281] & 0xFFF) + 2) != v4 ? (v5 = 0) : (v5 = *v3),
        !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 504))(v5)) )
  {
    if ( *(_DWORD *)(dword_104451A4 + 48) && (int)this[480] > 0 )
    {
      v6 = this + 1;
      if ( *(_DWORD *)(dword_104036CC + 48) )
      {
        (*(void (__thiscall **)(_DWORD *, int, float *, _BYTE *))(*v6 + 148))(v6, 1, &v16, v12);
        sub_101EDFB0(v12, &v13);
        v11 = this[20];
        v16 = v13 * 2.0 + v16;
        v17 = v14 * 2.0 + v17;
        v18 = 2.0 * v15 + v18;
        v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413164 + 16))(dword_10413164, v11);
        *(float *)(v7 + 4) = v16;
        *(float *)(v7 + 8) = v17;
        *(float *)(v7 + 12) = v18;
        *(_WORD *)(v7 + 20) = -1286;
        *(_BYTE *)(v7 + 22) = 120;
        *(float *)(v7 + 24) = *((float *)off_103DC81C + 3) + 0.050000001;
        *(float *)(v7 + 16) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                dword_10413198,
                                256.0,
                                288.0);
        *(float *)(v7 + 28) = 512.0;
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int, float *, _BYTE *))(*v6 + 148))(v6, 1, &v13, v12);
        v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413164 + 20))(dword_10413164, this[20] + 0x40000000);
        *(float *)(v8 + 4) = v13;
        *(float *)(v8 + 8) = v14;
        *(float *)(v8 + 12) = v15;
        v19 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 32, 64);
        v9 = (double)v19;
        *(float *)(v8 + 16) = v9;
        *(float *)(v8 + 28) = v9 * 20.0;
        v10 = *((float *)off_103DC81C + 3);
        *(_DWORD *)(v8 + 20) = 88129791;
        *(float *)(v8 + 24) = v10 + 0.050000001;
      }
    }
  }
}
