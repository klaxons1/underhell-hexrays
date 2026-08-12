char __thiscall sub_10428C90(int **this, int a2, const char *a3, char a4, int a5)
{
  const char *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int *v10; // edi
  int v11; // ebp
  int i; // esi
  _DWORD *v13; // eax
  _DWORD *v14; // [esp+8h] [ebp-4h] BYREF

  sub_10449650();
  if ( (unsigned __int8)sub_1044A060(a2, &v14, a3) )
  {
    v7 = (const char *)sub_1044A120(v14);
    if ( !_stricmp(v7, "DmeParticleSystemDefinition") )
    {
      v8 = sub_10428BC0(this[35], v14);
      if ( v8 )
      {
        if ( a4 )
        {
          *((_BYTE *)v8 + 846) |= 2u;
          sub_104282B0((int)v8);
        }
      }
      sub_10449890(v14);
      sub_10449690(a5);
      return 1;
    }
    else
    {
      v9 = (_DWORD *)sub_1044A4D0("particleSystemDefinitions");
      if ( v9 && *v9 == 15 )
      {
        v10 = sub_10427BE0(v9);
        v11 = v10[3];
        for ( i = 0; i < v11; ++i )
        {
          v13 = sub_10428BC0(this[35], *(_DWORD **)(*v10 + 4 * i));
          if ( v13 && a4 )
          {
            *((_BYTE *)v13 + 846) |= 2u;
            sub_104282B0((int)v13);
          }
        }
        sub_10449890(v14);
        sub_10449690(a5);
        return 1;
      }
      else
      {
        sub_10449890(v14);
        sub_10449690(a5);
        return 0;
      }
    }
  }
  else
  {
    Warning("Unable to read particle definition %s! UtlBuffer is the wrong type!\n", a3);
    sub_10449690(a5);
    return 0;
  }
}
