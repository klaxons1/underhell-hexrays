char __thiscall sub_10051CA0(int this, float a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  double v6; // st7
  double v8; // st7
  float v9; // [esp+0h] [ebp-10h]
  float v10; // [esp+0h] [ebp-10h]

  v3 = *(_DWORD *)(this + 20);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) || !sub_10023D10(*(_DWORD **)(this + 4), 64) )
  {
    if ( *(_DWORD *)(*(_DWORD *)(this + 4) + 2324) == 3 )
    {
      if ( *(float *)(this + 72) >= (double)*(float *)(this + 68) )
        v6 = *(float *)(this + 72);
      else
        v6 = *(float *)(this + 68);
      v9 = v6 * a2;
      if ( sub_10051020(this, v9, *(float *)(this + 44), *(_DWORD *)(this + 24)) )
        return 1;
    }
    else
    {
      if ( *(float *)(this + 40) >= (double)*(float *)(this + 48) )
        v8 = *(float *)(this + 40);
      else
        v8 = *(float *)(this + 48);
      v10 = v8 * a2;
      if ( sub_10051020(this, v10, *(float *)(this + 44), *(_DWORD *)(this + 24))
        && ((*(_BYTE *)(this + 24) & 2) == 0 || sub_10023D10(*(_DWORD **)(this + 4), 32)) )
      {
        return 1;
      }
    }
  }
  return 0;
}
