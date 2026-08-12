void __usercall sub_10401510(int a1@<ecx>, float a2@<ebx>)
{
  int v3; // eax
  void *v4; // edi
  void (__thiscall *v5)(int, int); // eax
  float *v6; // ebx
  float v7; // edi
  int v8; // eax
  float *v9; // ebx
  float v10; // edi
  int v11; // eax
  float v12; // [esp+20h] [ebp-Ch]

  if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
  {
    sub_10401440(a1, a2);
  }
  else if ( *(_BYTE *)(a1 + 1392) )
  {
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)a1 + 1132))(10, 0.0);
    v3 = sub_100D1940((_DWORD *)a1);
    v4 = (void *)v3;
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
      {
        sub_101E3110(v4, 0x14u, 0, 1u);
        if ( *(float *)(a1 + 1424) > 1.0 )
          *(float *)(a1 + 1424) = 1.0;
        v5 = *(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944);
        *(float *)(a1 + 1428) = 0.0;
        v5(a1, 174);
        *(_BYTE *)(a1 + 1392) = 0;
        if ( sub_103FB400((_DWORD *)a1, *(float *)&v4) )
        {
          v12 = a2;
          v6 = (float *)sub_1023DBA0();
          v7 = *v6;
          v8 = sub_103FB400((_DWORD *)a1, *v6);
          (*(void (__thiscall **)(float *, int, _DWORD, _DWORD))(LODWORD(v7) + 48))(v6, v8, 0.0, 1.0);
          v9 = (float *)sub_1023DBA0();
          v10 = *v9;
          v11 = sub_103FB400((_DWORD *)a1, *v9);
          (*(void (__thiscall **)(float *, int, _DWORD, _DWORD))(LODWORD(v10) + 44))(v9, v11, 50.0, 1.0);
          a2 = v12;
        }
        sub_103FF610((_DWORD *)a1, a2);
        *(_DWORD *)(a1 + 9828) = 1;
        sub_103FD9B0((_DWORD *)a1);
      }
    }
  }
}
