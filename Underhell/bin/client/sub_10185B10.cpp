int __thiscall sub_10185B10(float *this, int a2)
{
  int v2; // ebx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int (__thiscall *v8)(float *); // eax
  const char *v9; // [esp-4h] [ebp-10h]

  v2 = a2;
  this[7] = 0.0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( *((_DWORD *)this + 1515) == -1 )
        return (**(int (__thiscall ***)(void *, _DWORD))this)(this, 0);
      if ( *((_DWORD *)this + 2) )
        this[7] = 1000.0;
      v5 = sub_100422D0();
      if ( v5 )
      {
        v6 = *((_DWORD *)this - 62);
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 8) + 36))(v5 + 8);
        (*(void (__thiscall **)(float *, int))(v6 + 104))(this - 62, v7);
        v2 = a2;
      }
      (*(void (__thiscall **)(float *, int))(*((_DWORD *)this - 62) + 72))(this - 62, 1);
      if ( *((_DWORD *)this + 2) == 1
        || !(*(unsigned __int8 (__thiscall **)(float *))(*((_DWORD *)this - 62) + 208))(this - 62) )
      {
        goto LABEL_21;
      }
      v9 = "MapZoomToSmall";
    }
    else
    {
      if ( a2 != 2 )
        goto LABEL_21;
      if ( *((_DWORD *)this + 1515) == -1 )
        return (**(int (__thiscall ***)(void *, _DWORD))this)(this, 0);
      if ( *((_DWORD *)this + 2) )
        this[7] = 1000.0;
      (*(void (__thiscall **)(float *, _DWORD))(*((_DWORD *)this - 62) + 104))(this - 62, 0);
      (*(void (__thiscall **)(float *, int))(*((_DWORD *)this - 62) + 72))(this - 62, 1);
      if ( *((_DWORD *)this + 2) == 2
        || !(*(unsigned __int8 (__thiscall **)(float *))(*((_DWORD *)this - 62) + 208))(this - 62) )
      {
        goto LABEL_21;
      }
      v9 = "MapZoomToLarge";
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    sub_10248C80(v9);
    goto LABEL_21;
  }
  (*(void (__thiscall **)(float *))(*((_DWORD *)this - 62) + 72))(this - 62);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48, "MapOff");
  sub_10248C80(0);
LABEL_21:
  v8 = *(int (__thiscall **)(float *))(*((_DWORD *)this - 62) + 204);
  *((_DWORD *)this + 2) = v2;
  return v8(this - 62);
}
