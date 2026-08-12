void __thiscall sub_102CA890(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // ecx
  _DWORD *v6; // edi
  char *v7; // eax
  char *v8; // eax

  sub_101C8D10(this);
  if ( *(_BYTE *)(this + 1132) )
  {
    v2 = *(_DWORD *)(this + 300);
    if ( v2 != -1 )
    {
      v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1];
      v4 = v2 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v4 )
      {
        if ( *v3 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v4 )
            v5 = *v3;
          else
            v5 = 0;
          v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 208))(v5);
          v7 = *(char **)(this + 1116);
          if ( !v7 )
            v7 = (char *)String;
          sub_10078870(v6, v7, *(float *)(this + 732));
          v8 = *(char **)(this + 1120);
          if ( !v8 )
            v8 = (char *)String;
          sub_10078870(v6, v8, *(float *)(this + 728));
          (*(void (__thiscall **)(_DWORD *))(*v6 + 728))(v6);
        }
      }
    }
  }
}
