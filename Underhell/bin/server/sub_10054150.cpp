int __thiscall sub_10054150(int this)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // eax
  _BYTE v5[4]; // [esp+14h] [ebp-4h] BYREF

  v2 = *(_DWORD **)(this + 4);
  if ( v2[581] != 3 && !sub_10023D10(v2, 17) && !sub_10023D10(*(_DWORD **)(this + 4), 18)
    || !sub_10051020(this, *(float *)(this + 40), *(float *)(this + 44), *(_DWORD *)(this + 24)) )
  {
    if ( *(_DWORD *)(*(_DWORD *)(this + 4) + 2796) && (v3 = (_DWORD *)sub_100B1560(v5, 1)) != 0 )
    {
      while ( !sub_10023D10(v3, 67) )
      {
        v3 = (_DWORD *)sub_100B1630(v5, 1);
        if ( !v3 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( sub_10054080(this) || *(_BYTE *)(this + 84) )
        return 20;
    }
  }
  return 0;
}
