double __thiscall sub_102A0A80(_DWORD *this, int a2, float a3)
{
  int v4; // esi
  int v5; // edi
  _DWORD *v6; // eax
  float v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  v4 = this[1];
  v8 = *(float *)(v4 + 904);
  v5 = dword_10700AC8;
  v9 = *(_DWORD *)(v4 + 908);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(v4 + 1100) && sub_100D7240((void *)v4) )
    sub_100BD750((volatile signed __int32 *)v4);
  v6 = *(_DWORD **)(v4 + 1100);
  if ( !v6 || (v10 = *(_DWORD *)(v4 + 1100), !*v6) )
    v10 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  return sub_100BCBB0((void *)v4, v10, v9) * a3 * *(float *)(this[1] + 864) + v8;
}
