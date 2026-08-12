void __thiscall sub_10029AE0(int this)
{
  _DWORD *v2; // edi
  char v3; // al
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax

  if ( *(_DWORD *)(this + 1808) == -1 )
  {
    *(_DWORD *)(this + 1808) = 0;
    sub_1000F6C0(this, 8);
    if ( *(_BYTE *)(this + 1760) )
      sub_10029560((_DWORD *)this);
  }
  if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    sub_10026520(this);
  v2 = *(_DWORD **)(this + 1940);
  if ( !v2 || !*v2 )
    v2 = 0;
  *(float *)(this + 1324) = sub_100271C0((void *)this, v2, *(_DWORD *)(this + 1808));
  v3 = sub_10008630((int)v2, *(_DWORD *)(this + 1808));
  v4 = *(_DWORD *)(this + 1768);
  *(float *)(this + 1236) = 1.0;
  *(_BYTE *)(this + 1333) = v3 & 1;
  *(float *)(this + 1328) = 0.0;
  v5 = ((unsigned __int8)*(_DWORD *)(this + 1764) + 1) & 7;
  *(_DWORD *)(this + 1768) = ((_BYTE)v4 + 1) & 7;
  *(_BYTE *)(this + 1332) = 0;
  *(_DWORD *)(this + 1764) = v5;
  v6 = (_DWORD *)sub_10127960(*(_DWORD *)(this + 1808));
  sub_10008840(v6);
}
