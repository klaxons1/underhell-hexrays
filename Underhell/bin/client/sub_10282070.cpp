void __thiscall sub_10282070(int this, int a2)
{
  int v2; // esi
  int v3; // edi
  int (__thiscall ***v4)(void *, int, int); // eax
  int (__thiscall ***v5)(void *, int, int); // ebx
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // edx
  bool v10; // cc
  int v11; // [esp+4h] [ebp-10h]
  int v13; // [esp+Ch] [ebp-8h]
  int v14; // [esp+10h] [ebp-4h]

  v2 = this;
  if ( *(_DWORD *)(this + 456) )
  {
    v3 = *(_DWORD *)(this + 452);
    v11 = v3;
    v4 = (int (__thiscall ***)(void *, int, int))(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 456) + 36))(*(_DWORD *)(this + 456));
    v5 = v4;
    if ( !v3 || (int (__thiscall ***)(void *, int, int))v3 == v4 )
    {
      if ( sub_10237130((int (__thiscall ***)(_DWORD))v4) <= 0 )
        return;
      v3 = sub_10237150(v5, 0);
    }
    else
    {
      v6 = sub_10237130((int (__thiscall ***)(_DWORD))v4);
      v7 = 0;
      if ( v6 > 0 )
      {
        while ( sub_10237150(v5, v7) != v3 )
        {
          if ( ++v7 >= v6 )
            goto LABEL_7;
        }
        if ( v7 < v6 )
        {
          v13 = 1;
          if ( v6 > 1 )
          {
            v8 = v7 + a2;
            v14 = v7 + a2;
            do
            {
              v9 = v8 % v6;
              if ( v8 % v6 < 0 )
                v9 += v6;
              if ( v9 != v7 )
              {
                v3 = sub_10237150(v5, v9);
                if ( !__RTDynamicCast(
                        v3,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
                        (int)&vgui::BuildModeDialog `RTTI Type Descriptor',
                        0) )
                  break;
                v3 = v11;
              }
              v8 = a2 + v14;
              v10 = ++v13 < v6;
              v14 += a2;
            }
            while ( v10 );
          }
        }
      }
LABEL_7:
      v2 = this;
    }
    if ( v3 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 1028))(v2, v3);
  }
}
