void __stdcall sub_1016BD90(int a1, int a2, float *a3, float *a4, int a5, char a6, int a7)
{
  float *v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // ecx

  v7 = sub_10104030(0);
  if ( v7 )
  {
    v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a1);
    if ( v8 )
    {
      v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v8);
      sub_10034E80(v7, v9);
      *((_DWORD *)v7 + 299) = a2;
      sub_10037BA0((int)v7, a3);
      sub_10037CA0((int)v7, a4);
      (*(void (__thiscall **)(float *, int))(*((_DWORD *)v7 + 490) + 96))(v7 + 490, 3);
      sub_1000DEF0(v7, a7);
      if ( sub_101034A0((int)v7) && (v10 = *((_DWORD *)v7 + 46)) != 0 )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 208))(v10, a5, 0);
        if ( (a6 & 1) != 0 )
        {
          (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)v7 + 412))(v7, 0);
          (*(void (__thiscall **)(float *))(*(_DWORD *)v7 + 756))(v7);
        }
      }
      else
      {
        (*(void (__thiscall **)(float *))(*((_DWORD *)v7 + 2) + 4))(v7 + 2);
      }
    }
    else
    {
      DevMsg("CTempEnts::PhysicsProp: model index %i not found\n", dword_10413178);
    }
  }
}
