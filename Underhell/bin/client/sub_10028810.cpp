char __thiscall sub_10028810(int this, void *a2)
{
  int v2; // ebx
  int v5; // esi
  int v6; // eax
  unsigned __int16 *v7; // eax

  v2 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    goto LABEL_2;
  if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    sub_10026520(this);
  v5 = *(_DWORD *)(this + 1940);
  if ( v5
    && *(_DWORD *)v5
    && (v6 = *(_DWORD *)v5 + *(_DWORD *)(*(_DWORD *)v5 + 176) + 12 * *(_DWORD *)(this + 1204)) != 0
    && *(_DWORD *)(v6 + 4) )
  {
    v7 = (unsigned __int16 *)sub_100285F0((float *)this, *(float *)(this + 1940));
    sub_1001E360(v7, a2, *(_DWORD *)(*(_DWORD *)v5 + 156));
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
    return 1;
  }
  else
  {
LABEL_2:
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
    return 0;
  }
}
