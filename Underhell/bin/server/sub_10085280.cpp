float *__stdcall sub_10085280(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  float *v6; // eax
  float *v7; // esi

  if ( a1 < 0 || a1 >= *(_DWORD *)(dword_106935D8 + 4) )
  {
    ++dword_10691DE0;
    v3 = 0;
  }
  else
  {
    v3 = *(_DWORD *)(*(_DWORD *)(dword_106935D8 + 8) + 4 * a1);
  }
  if ( a2 < 0 || a2 >= *(_DWORD *)(dword_106935D8 + 4) )
  {
    ++dword_10691DE0;
    v4 = 0;
  }
  else
  {
    v4 = *(_DWORD *)(*(_DWORD *)(dword_106935D8 + 8) + 4 * a2);
  }
  if ( v3 && v4 )
  {
    if ( v3 == v4 )
    {
      DevMsg("Attempted to link a node to itself\n");
      return 0;
    }
    else if ( *(_DWORD *)(v3 + 84) == 30 )
    {
      DevMsg("Node %d has too many links\n", a1);
      return 0;
    }
    else if ( *(_DWORD *)(v4 + 84) == 30 )
    {
      DevMsg("Node %d has too many links\n", a2);
      return 0;
    }
    else
    {
      v6 = (float *)sub_10184390(24);
      if ( v6 )
        v7 = sub_10074650(v6);
      else
        v7 = 0;
      *(_WORD *)v7 = a1;
      *((_WORD *)v7 + 1) = a2;
      *((_DWORD *)v7 + 5) = a3;
      sub_1008D530(v7);
      sub_1008D530(v7);
      return v7;
    }
  }
  else
  {
    DevMsg("Attempted to create link to node that doesn't exist\n");
    return 0;
  }
}
