int __thiscall sub_100D0CE0(int this)
{
  int v2; // eax
  int i; // esi
  int v4; // ecx
  int v5; // eax
  int result; // eax

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
  sub_10246220(v2);
  for ( i = 0; i < *(_DWORD *)(this + 40); ++i )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 24))(v4);
  }
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
  result = sub_10248C60(v5);
  *(float *)(this + 4) = 0.0;
  *(float *)(this + 8) = 0.0;
  return result;
}
