void __thiscall sub_10193230(int this)
{
  int v2; // eax
  float *v3; // eax
  float *v4; // ecx

  if ( !*(_DWORD *)(this + 3376) )
  {
    v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413164 + 16))(dword_10413164, *(_DWORD *)(this + 68));
    *(_DWORD *)(this + 3376) = v2;
    *(_BYTE *)(v2 + 20) = -36;
    *(_BYTE *)(*(_DWORD *)(this + 3376) + 21) = -1;
    *(_BYTE *)(*(_DWORD *)(this + 3376) + 22) = 80;
    *(float *)(*(_DWORD *)(this + 3376) + 16) = 180.0;
    *(float *)(*(_DWORD *)(this + 3376) + 32) = 0.5;
    **(_DWORD **)(this + 3376) = 2;
  }
  v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 12) + 36))(this - 12);
  v4 = *(float **)(this + 3376);
  v4[1] = *v3;
  v4[2] = v3[1];
  v4[3] = v3[2];
  sub_10024BC0((float *)this);
}
