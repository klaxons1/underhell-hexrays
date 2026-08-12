float *__cdecl sub_10381C70(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)sub_100D6340(4172);
  v3 = v2;
  if ( v2 )
  {
    sub_10165190(v2);
    *(_DWORD *)v3 = &CNPC_Magnusson::`vftable';
    *((_DWORD *)v3 + 526) = &CNPC_Magnusson::`vftable';
    *((_DWORD *)v3 + 905) = &CNPC_Magnusson::`vftable';
    *((_DWORD *)v3 + 913) = &CNPC_Magnusson::`vftable';
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
