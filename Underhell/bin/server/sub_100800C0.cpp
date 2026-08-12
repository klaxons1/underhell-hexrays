bool __thiscall sub_100800C0(int this, float *a2)
{
  int v4; // eax
  int v5; // esi
  float *v6; // eax
  float v7; // [esp+4h] [ebp-18h]
  float v8; // [esp+8h] [ebp-14h]
  float v9; // [esp+10h] [ebp-Ch]
  float v10; // [esp+14h] [ebp-8h]

  if ( *(_BYTE *)(this + 64) )
    return 1;
  v4 = *(_DWORD *)(this + 4);
  v9 = *a2 - *(float *)(v4 + 716);
  v10 = a2[1] - *(float *)(v4 + 720);
  off_10689714();
  v5 = *(_DWORD *)(this + 4);
  v6 = (float *)sub_100A6030(*(_DWORD *)(this + 36));
  v7 = *v6 - *(float *)(v5 + 716);
  v8 = v6[1] - *(float *)(v5 + 720);
  off_10689714();
  return *(_BYTE *)(this + 64) || v7 * v9 + v10 * v8 > 0.76599997;
}
