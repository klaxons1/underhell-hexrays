char *__thiscall pDNameNode::getString(pDNameNode *this, char *a2, char *a3)
{
  int *v3; // eax
  int v4; // eax

  v3 = (int *)*((_DWORD *)this + 1);
  if ( v3 && (v4 = *v3) != 0 )
    return (char *)(*(int (__thiscall **)(int, char *, char *))(*(_DWORD *)v4 + 8))(v4, a2, a3);
  else
    return a2;
}
