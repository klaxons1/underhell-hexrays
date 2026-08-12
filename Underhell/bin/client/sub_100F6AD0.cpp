void __usercall sub_100F6AD0(int a1@<ecx>, int a2@<edi>)
{
  double v2; // st7
  int v3; // esi
  void *v4; // esp
  int v5; // eax
  int *v6; // esi
  float v7; // [esp+14h] [ebp-18h]
  _DWORD v8[3]; // [esp+18h] [ebp-14h] BYREF
  int v9; // [esp+24h] [ebp-8h]
  int v10; // [esp+28h] [ebp-4h]

  v9 = a1;
  CVProfile::EnterScope(g_VProfCurrentProfile, "CPhysicsSystem::PhysicsSimulate", 0, "Physics", 0, 4);
  v2 = *((float *)off_103DC81C + 4);
  if ( dword_10436254 )
  {
    byte_103E1B28 = 1;
    v7 = v2 * *(float *)(dword_10435E64 + 44);
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10436254 + 136))(LODWORD(v7));
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10436254 + 180))(dword_10436254);
    v10 = v3;
    if ( v3 )
    {
      v4 = alloca(4 * v3);
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_10436254 + 184))(dword_10436254, v8);
      a2 = 0;
      if ( v3 > 0 )
      {
        do
        {
          v5 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8[a2] + 68))(v8[a2]);
          v6 = (int *)v5;
          if ( v5 )
          {
            if ( sub_1008E510((_DWORD *)(v5 + 352)) )
              sub_1008F760(v6 + 88);
            (*(void (__thiscall **)(int *, _DWORD))(*v6 + 236))(v6, v8[a2]);
          }
          ++a2;
        }
        while ( a2 < v10 );
      }
    }
    byte_103E1B28 = 0;
    sub_100F52F0((char *)&off_103E1A70);
    sub_100F63D0((int)&off_103E1A70);
    sub_100F64C0(&off_103E1A70);
  }
  sub_100F6720(a2, (_DWORD *)(v9 + 12));
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
