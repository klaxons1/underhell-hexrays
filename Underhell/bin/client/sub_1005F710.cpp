void __thiscall sub_1005F710(int this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax

  if ( *(_BYTE *)(this + 1956) && (*(int (__thiscall **)(int))(*(_DWORD *)this + 36))(this) )
  {
    v4 = *(_DWORD *)dword_10413178;
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 36))(this);
    if ( !(*(int (__thiscall **)(int, int))(v4 + 112))(dword_10413178, v5) || *(_DWORD *)(this + 1804) == -1 )
    {
      *(float *)a2 = flt_10459240;
      *(_QWORD *)(a2 + 4) = qword_10459244;
      *(float *)a3 = flt_10459240;
      *(_QWORD *)(a3 + 4) = qword_10459244;
    }
    else
    {
      if ( *((_DWORD *)off_103DC81C + 1) != *(_DWORD *)(this + 1960) )
      {
        sub_1002A140(this - 4, (float *)(this + 1964), (float *)(this + 1976));
        *(_DWORD *)(this + 1960) = *((_DWORD *)off_103DC81C + 1);
      }
      *(float *)a2 = *(float *)(this + 1964);
      *(float *)(a2 + 4) = *(float *)(this + 1968);
      *(float *)(a2 + 8) = *(float *)(this + 1972);
      *(float *)a3 = *(float *)(this + 1976);
      *(float *)(a3 + 4) = *(float *)(this + 1980);
      *(float *)(a3 + 8) = *(float *)(this + 1984);
    }
  }
  else
  {
    sub_10029130((_DWORD *)this, (float *)a2, (float *)a3);
  }
}
