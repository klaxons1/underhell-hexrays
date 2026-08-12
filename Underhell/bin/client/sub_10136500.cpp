int __thiscall sub_10136500(int this)
{
  int v1; // eax
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v6; // [esp+20h] [ebp-8h]

  *(_BYTE *)(this + 20) = 1;
  v1 = (int)(*(float *)(dword_10439DC4 + 44) * 1024.0);
  v6 = (int)((double)*(int *)(this + 12) / (double)*(int *)(this + 16) * (double)v1);
  *(float *)(this + 48) = *(float *)(this + 48) - (double)(v6 / 2);
  *(float *)(this + 52) = (double)(v1 / 2) + *(float *)(this + 52);
  *(float *)(this + 24) = 0.0;
  *(float *)(this + 28) = (float)-v1;
  *(float *)(this + 32) = (float)v6;
  *(float *)(this + 36) = 0.0;
  *(float *)(this + 60) = 90.0;
  *(float *)(this + 64) = 90.0;
  *(float *)(this + 68) = 0.0;
  v2 = (int)(*(float *)(this + 52) + *(float *)(this + 48) + *(float *)(this + 56));
  if ( v2 != dword_10439FDC )
  {
    Msg(
      "Overview: scale %.2f, pos_x %.0f, pos_y %.0f\n",
      *(float *)(dword_10439DC4 + 44),
      *(float *)(this + 48),
      *(float *)(this + 52));
    dword_10439FDC = v2;
  }
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v4 = v3;
  if ( v3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  (*(void (__thiscall **)(int, _DWORD, int, _DWORD, int))(*(_DWORD *)v4 + 292))(v4, 0, 255, 0, 255);
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
}
