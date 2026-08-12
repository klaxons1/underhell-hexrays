bool __thiscall sub_10314330(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // esi

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
  v5 = v4;
  return (!v4
       || *(char **)(v4 + 92) != "func_breakable"
       && !sub_100D6240((_DWORD *)v4, "func_breakable")
       && *(char **)(v5 + 92) != "func_physbox"
       && !sub_100D6240((_DWORD *)v5, "func_physbox")
       && *(char **)(v5 + 92) != "prop_physics"
       && !sub_100D6240((_DWORD *)v5, "prop_physics")
       && *(char **)(v5 + 92) != "physics_prop"
       && !sub_100D6240((_DWORD *)v5, "physics_prop"))
      && sub_10265590(this, a2, a3);
}
