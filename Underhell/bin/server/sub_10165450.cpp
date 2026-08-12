float *__cdecl sub_10165450(int a1, int a2)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)sub_100D6340(4480);
  v3 = v2;
  if ( v2 )
  {
    sub_10165190(v2);
    *(_DWORD *)v3 = &CFlextalkActor::`vftable';
    *((_DWORD *)v3 + 526) = &CFlextalkActor::`vftable';
    *((_DWORD *)v3 + 905) = &CFlextalkActor::`vftable';
    *((_DWORD *)v3 + 913) = &CFlextalkActor::`vftable';
    v3[1118] = 0.0;
    v3[1119] = 0.0;
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
