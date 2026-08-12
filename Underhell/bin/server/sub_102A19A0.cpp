void __thiscall sub_102A19A0(int this, _DWORD *a2)
{
  int v3; // edi
  char *v4; // eax
  int v5; // edi
  char *v6; // eax

  if ( *a2 == 100000 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(this + 4) + 908) != *(_DWORD *)(this + 112) )
    {
      Warning("Corrected entrance animation on vehicle enter!\n");
      sub_10039F40(*(int **)(this + 4), 16);
      sub_10081C10(*(_DWORD *)(*(_DWORD *)(this + 4) + 2588));
      v5 = *(_DWORD *)(this + 4);
      v6 = (char *)sub_100BE1F0(v5, *(_DWORD *)(this + 112));
      *(_DWORD *)(v5 + 2704) = *sub_10162BE0(&a2, v6);
      sub_102A1060(this);
    }
    if ( !sub_102A17F0(this) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 316))(this);
      goto LABEL_12;
    }
  }
  else
  {
    if ( *a2 != 100001 )
    {
      sub_1004B450((_BYTE *)this, (int)a2);
      return;
    }
    if ( *(_DWORD *)(*(_DWORD *)(this + 4) + 908) != *(_DWORD *)(this + 112) )
    {
      Warning("Corrected exit animation on vehicle exit!\n");
      sub_10039F40(*(int **)(this + 4), 16);
      sub_10081C10(*(_DWORD *)(*(_DWORD *)(this + 4) + 2588));
      v3 = *(_DWORD *)(this + 4);
      v4 = (char *)sub_100BE1F0(v3, *(_DWORD *)(this + 112));
      *(_DWORD *)(v3 + 2704) = *sub_10162BE0(&a2, v4);
      sub_102A1060(this);
    }
    if ( !sub_102A17F0(this) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 320))(this);
LABEL_12:
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
    }
  }
}
