/** \defgroup scheme_IntegratorOutput
<table>
<caption>Output scheme: CasADi::IntegratorOutput  (INTEGRATOR_NUM_OUT = 2) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>INTEGRATOR_XF</td><td>State at tf</td></tr>
<tr><td>INTEGRATOR_XPF</td><td>State derivative at tf</td></tr>
</table>
*/
/** \defgroup scheme_MUSCOD_FCN_Output
<table>
<caption>Output scheme: CasADi::MUSCOD_FCN_Output  (MUSCOD_FCN_NUM_OUT = 2) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>MUSCOD_FCN_RHS</td><td></td></tr>
<tr><td>MUSCOD_FCN_RES</td><td></td></tr>
</table>
*/
/** \defgroup scheme_TermOutput
<table>
<caption>Output scheme: CasADi::TermOutput  (TERM_NUM_OUT = 1) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>TERM_RX</td><td>Initial conditions for the backwards integration, differential states.</td></tr>
</table>
*/
/** \defgroup scheme_QPInput
<table>
<caption>Input scheme: CasADi::QPInput  (QP_NUM_IN = 9) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>QP_H</td><td>The square matrix H: sparse, (nx x nx). Only the lower triangular part is actually used. The matrix is assumed to be symmetrical.</td></tr>
<tr><td>QP_G</td><td>The column vector G: dense, (nx x 1)</td></tr>
<tr><td>QP_A</td><td>The matrix A: sparse, (nc x nx) - product with x must be dense.</td></tr>
<tr><td>QP_LBA</td><td>dense, (nc x 1)</td></tr>
<tr><td>QP_UBA</td><td>dense, (nc x 1)</td></tr>
<tr><td>QP_LBX</td><td>dense, (nx x 1)</td></tr>
<tr><td>QP_UBX</td><td>dense, (nx x 1)</td></tr>
<tr><td>QP_X_INIT</td><td>dense, (nx x 1)</td></tr>
<tr><td>QP_LAMBDA_INIT</td><td></td></tr>
</table>
*/
/** \defgroup scheme_ACADO_Input
<table>
<caption>Input scheme: CasADi::ACADO_Input  (ACADO_NUM_IN = 17) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>ACADO_X_GUESS</td><td></td></tr>
<tr><td>ACADO_U_GUESS</td><td></td></tr>
<tr><td>ACADO_P_GUESS</td><td></td></tr>
<tr><td>ACADO_LBX</td><td></td></tr>
<tr><td>ACADO_UBX</td><td></td></tr>
<tr><td>ACADO_LBX0</td><td></td></tr>
<tr><td>ACADO_UBX0</td><td></td></tr>
<tr><td>ACADO_LBXF</td><td></td></tr>
<tr><td>ACADO_UBXF</td><td></td></tr>
<tr><td>ACADO_LBU</td><td></td></tr>
<tr><td>ACADO_UBU</td><td></td></tr>
<tr><td>ACADO_LBP</td><td></td></tr>
<tr><td>ACADO_UBP</td><td></td></tr>
<tr><td>ACADO_LBC</td><td></td></tr>
<tr><td>ACADO_UBC</td><td></td></tr>
<tr><td>ACADO_LBR</td><td></td></tr>
<tr><td>ACADO_UBR</td><td></td></tr>
</table>
*/
/** \defgroup scheme_ACADO_FCN_Input
<table>
<caption>Input scheme: CasADi::ACADO_FCN_Input  (ACADO_FCN_NUM_IN = 6) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>ACADO_FCN_T</td><td></td></tr>
<tr><td>ACADO_FCN_XD</td><td></td></tr>
<tr><td>ACADO_FCN_XA</td><td></td></tr>
<tr><td>ACADO_FCN_U</td><td></td></tr>
<tr><td>ACADO_FCN_P</td><td></td></tr>
<tr><td>ACADO_FCN_XDOT</td><td></td></tr>
</table>
*/
/** \defgroup scheme_RDAEInput
<table>
<caption>Input scheme: CasADi::RDAEInput  (RDAE_NUM_IN = 6) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>RDAE_X</td><td>Forward differential state</td></tr>
<tr><td>RDAE_Z</td><td>Forward algebraic state</td></tr>
<tr><td>RDAE_RX</td><td>Backward differential state</td></tr>
<tr><td>RDAE_RZ</td><td>Backward algebraic state</td></tr>
<tr><td>RDAE_P</td><td>Parameter vector</td></tr>
<tr><td>RDAE_T</td><td>Explicit time dependence</td></tr>
</table>
*/
/** \defgroup scheme_DAEOutput
<table>
<caption>Output scheme: CasADi::DAEOutput  (DAE_NUM_OUT = 1) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>DAE_RES</td><td>Right hand side of ODE. Should have same amount of non-zeros as DAEInput:DAE_Y</td></tr>
</table>
*/
/** \defgroup scheme_QPOutput
<table>
<caption>Output scheme: CasADi::QPOutput  (QP_NUM_OUT = 4) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>QP_PRIMAL</td><td>The primal solution.</td></tr>
<tr><td>QP_COST</td><td>The optimal cost.</td></tr>
<tr><td>QP_LAMBDA_A</td><td>The dual solution corresponding to linear bounds.</td></tr>
<tr><td>QP_LAMBDA_X</td><td>The dual solution corresponding to simple bounds.</td></tr>
</table>
*/
/** \defgroup scheme_NewIntegratorInput
<table>
<caption>Input scheme: CasADi::NewIntegratorInput  (NEW_INTEGRATOR_NUM_IN = 2) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>NEW_INTEGRATOR_X0</td><td>Differential state at t0</td></tr>
<tr><td>NEW_INTEGRATOR_P</td><td>Parameters p</td></tr>
</table>
*/
/** \defgroup scheme_NLPOutput
<table>
<caption>Output scheme: CasADi::NLPOutput  (NLP_NUM_OUT = 5) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>NLP_X_OPT</td><td>Decision variables for optimal solution (n x 1)</td></tr>
<tr><td>NLP_COST</td><td>Objective/cost function for optimal solution (1 x 1)</td></tr>
<tr><td>NLP_LAMBDA_G</td><td>Lagrange multipliers associated with G at the solution (m x 1)</td></tr>
<tr><td>NLP_LAMBDA_X</td><td>Lagrange multipliers associated with bounds on X at the solution (n x 1) When in warmstart mode, this output may be used as input (</td></tr>
<tr><td>NLP_G</td><td>The constraints evaluated at the optimal solution (m x 1)</td></tr>
</table>
*/
/** \defgroup scheme_NEW_DAEOutput
<table>
<caption>Output scheme: CasADi::NEW_DAEOutput  (NEW_DAE_NUM_OUT = 3) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>NEW_DAE_ODE</td><td>Right hand side of ODE.</td></tr>
<tr><td>NEW_DAE_ALG</td><td>Right hand side of algebraic equations.</td></tr>
<tr><td>NEW_DAE_QUAD</td><td>Right hand side of quadratures.</td></tr>
</table>
*/
/** \defgroup scheme_DAEInput
<table>
<caption>Input scheme: CasADi::DAEInput  (DAE_NUM_IN = 4) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>DAE_T</td><td>Time. (1-by-1)</td></tr>
<tr><td>DAE_Y</td><td>State vector (matrix). Should have same amount of non-zeros as DAEOutput:DAE_RES</td></tr>
<tr><td>DAE_P</td><td>Parameter vector (matrix).</td></tr>
<tr><td>DAE_YDOT</td><td>State derivative vector (matrix). Should have same amount of non-zeros as DAEOutput:DAE_RES</td></tr>
</table>
*/
/** \defgroup scheme_ACADO_Output
<table>
<caption>Output scheme: CasADi::ACADO_Output  (ACADO_NUM_OUT = 4) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>ACADO_X_OPT</td><td></td></tr>
<tr><td>ACADO_U_OPT</td><td></td></tr>
<tr><td>ACADO_P_OPT</td><td></td></tr>
<tr><td>ACADO_COST</td><td></td></tr>
</table>
*/
/** \defgroup scheme_NewIntegratorOutput
<table>
<caption>Output scheme: CasADi::NewIntegratorOutput  (NEW_INTEGRATOR_NUM_OUT = 4) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>NEW_INTEGRATOR_XF</td><td>Differential state at tf</td></tr>
<tr><td>NEW_INTEGRATOR_QF</td><td>Quadrature state at tf</td></tr>
<tr><td>NEW_INTEGRATOR_RX0</td><td>Backward differential state at t0</td></tr>
<tr><td>NEW_INTEGRATOR_RQ0</td><td>Backward quadrature state at t0</td></tr>
</table>
*/
/** \defgroup scheme_MayerInput
<table>
<caption>Input scheme: CasADi::MayerInput  (MAYER_NUM_IN = 2) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>MAYER_X</td><td>States at the end of integration (nx x 1)</td></tr>
<tr><td>MAYER_P</td><td>Problem parameters (np x 1)</td></tr>
</table>
*/
/** \defgroup scheme_ControlledDAEInput
<table>
<caption>Input scheme: CasADi::ControlledDAEInput  (CONTROL_DAE_NUM_IN = 9) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>CONTROL_DAE_T</td><td>Global physical time. (1-by-1)</td></tr>
<tr><td>CONTROL_DAE_Y</td><td>State vector (dimension nx-by-1). Should have same amount of non-zeros as DAEOutput:DAE_RES</td></tr>
<tr><td>CONTROL_DAE_P</td><td>Parameter vector (dimension np-by-1).</td></tr>
<tr><td>CONTROL_DAE_U</td><td>Control vector (dimension nu-by-1).</td></tr>
<tr><td>CONTROL_DAE_U_INTERP</td><td>Control vector, linearly interpolated (dimension nu-by-1).</td></tr>
<tr><td>CONTROL_DAE_YDOT</td><td>State derivative vector (dimension nx-by-1). Should have same amount of non-zeros as DAEOutput:DAE_RES</td></tr>
<tr><td>CONTROL_DAE_Y_MAJOR</td><td>State vector (dimension nx-by-1) at the last major time-step</td></tr>
<tr><td>CONTROL_DAE_T0</td><td>Time at start of control interval (1-by-1)</td></tr>
<tr><td>CONTROL_DAE_TF</td><td>Time at end of control interval (1-by-1)</td></tr>
</table>
*/
/** \defgroup scheme_TermInput
<table>
<caption>Input scheme: CasADi::TermInput  (TERM_NUM_IN = 3) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>TERM_X</td><td>Differential state</td></tr>
<tr><td>TERM_Q</td><td>Quadrature state</td></tr>
<tr><td>TERM_P</td><td>Parameter vector</td></tr>
</table>
*/
/** \defgroup scheme_NLPInput
<table>
<caption>Input scheme: CasADi::NLPInput  (NLP_NUM_IN = 7) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>NLP_X_INIT</td><td>Decision variables initial guess (n x 1)</td></tr>
<tr><td>NLP_LBX</td><td>Decision variables lower bound (n x 1), default -inf.</td></tr>
<tr><td>NLP_UBX</td><td>Decision variables upper bound (n x 1), default +inf.</td></tr>
<tr><td>NLP_LBG</td><td>Constraints lower bound (m x 1), default -inf.</td></tr>
<tr><td>NLP_UBG</td><td>Constraints upper bound (m x 1), default +inf.</td></tr>
<tr><td>NLP_LAMBDA_INIT</td><td>Lagrange multipliers associated with G, initial guess (m x 1)</td></tr>
<tr><td>NLP_P</td><td>Only for parametric NLP - static parameters on which the objective and constraints might depend.</td></tr>
</table>
*/
/** \defgroup scheme_IntegratorInput
<table>
<caption>Input scheme: CasADi::IntegratorInput  (INTEGRATOR_NUM_IN = 3) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>INTEGRATOR_X0</td><td>Differential or algebraic state at t0 (dimension nx-by-1)</td></tr>
<tr><td>INTEGRATOR_P</td><td>Parameters p (dimension np-by-1)</td></tr>
<tr><td>INTEGRATOR_XP0</td><td>State derivative at t0 (dimension nx-by-1) Only relevant for implicit intergators. This input may be changed during an IDASIntegrator::evaluate()</td></tr>
</table>
*/
/** \defgroup scheme_NEW_DAEInput
<table>
<caption>Input scheme: CasADi::NEW_DAEInput  (NEW_DAE_NUM_IN = 4) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>NEW_DAE_X</td><td>Differential state</td></tr>
<tr><td>NEW_DAE_Z</td><td>Algebraic state</td></tr>
<tr><td>NEW_DAE_P</td><td>Parameter vector</td></tr>
<tr><td>NEW_DAE_T</td><td>Explicit time dependence</td></tr>
</table>
*/
/** \defgroup scheme_OCPOutput
<table>
<caption>Output scheme: CasADi::OCPOutput  (OCP_NUM_OUT = 4) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>OCP_X_OPT</td><td>Optimal state trajectory.</td></tr>
<tr><td>OCP_U_OPT</td><td>Optimal control trajectory.</td></tr>
<tr><td>OCP_XP_OPT</td><td>Optimal state derivative trajectory.</td></tr>
<tr><td>OCP_P_OPT</td><td>Optimal parameters.</td></tr>
</table>
*/
/** \defgroup scheme_RDAEOutput
<table>
<caption>Output scheme: CasADi::RDAEOutput  (RDAE_NUM_OUT = 3) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>RDAE_ODE</td><td>Right hand side of ODE.</td></tr>
<tr><td>RDAE_ALG</td><td>Right hand side of algebraic equations.</td></tr>
<tr><td>RDAE_QUAD</td><td>Right hand side of quadratures.</td></tr>
</table>
*/
/** \defgroup scheme_OCPInput
<table>
<caption>Input scheme: CasADi::OCPInput  (OCP_NUM_IN = 17) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>OCP_T</td><td>Time grid: ((ns+1) x 1) - default: linspace(0,t_final,ns+1)</td></tr>
<tr><td>OCP_LBX</td><td>States lower bounds (nx x (ns+1))</td></tr>
<tr><td>OCP_UBX</td><td>States upper bounds (nx x (ns+1))</td></tr>
<tr><td>OCP_X_INIT</td><td>States initial guess (nx x (ns+1))</td></tr>
<tr><td>OCP_LBXP</td><td>States deriatives lower bounds (nx x (ns+1))</td></tr>
<tr><td>OCP_UBXP</td><td>States deriatives upper bounds (nx x (ns+1))</td></tr>
<tr><td>OCP_XP_INIT</td><td>States deriatives initial guess (nx x (ns+1))</td></tr>
<tr><td>OCP_LBU</td><td>Controls lower bounds (nu x ns)</td></tr>
<tr><td>OCP_UBU</td><td>Controls upper bounds (nu x ns)</td></tr>
<tr><td>OCP_U_INIT</td><td>Controls initial guess (nu x ns)</td></tr>
<tr><td>OCP_LBP</td><td>Parameters lower bounds (np x 1)</td></tr>
<tr><td>OCP_UBP</td><td>Parameters upper bounds (np x 1)</td></tr>
<tr><td>OCP_P_INIT</td><td>Parameters initial guess (np x 1)</td></tr>
<tr><td>OCP_LBH</td><td>Point constraint lower bound (nh x (ns+1))</td></tr>
<tr><td>OCP_UBH</td><td>Point constraint upper bound (nh x (ns+1))</td></tr>
<tr><td>OCP_LBG</td><td>Lower bound for the coupling constraints.</td></tr>
<tr><td>OCP_UBG</td><td>Upper bound for the coupling constraints.</td></tr>
</table>
*/
/** \defgroup scheme_ControlSimulatorInput
<table>
<caption>Input scheme: CasADi::ControlSimulatorInput  (CONTROLSIMULATOR_NUM_IN = 4) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>CONTROLSIMULATOR_X0</td><td>Differential or algebraic state at t0 (dimension nx-by-1)</td></tr>
<tr><td>CONTROLSIMULATOR_P</td><td>Parameters that are fixed over the entire horizon (dimension np-by-1)</td></tr>
<tr><td>CONTROLSIMULATOR_U</td><td>Parameters that change over the integration intervals (dimension (ns-1)-by-nu)</td></tr>
<tr><td>CONTROLSIMULATOR_XP0</td><td>State derivative at t0 (dimension nx-by-1) Only relevant for implicit integrators.</td></tr>
</table>
*/
/** \defgroup scheme_MUSCOD_FCN_Input
<table>
<caption>Input scheme: CasADi::MUSCOD_FCN_Input  (MUSCOD_FCN_NUM_IN = 5) </caption>
<tr><th>Name</th><th>Description</th></tr>
<tr><td>MUSCOD_FCN_T</td><td></td></tr>
<tr><td>MUSCOD_FCN_XD</td><td></td></tr>
<tr><td>MUSCOD_FCN_XA</td><td></td></tr>
<tr><td>MUSCOD_FCN_U</td><td></td></tr>
<tr><td>MUSCOD_FCN_P</td><td></td></tr>
</table>
*/
/** \class CasADi::NLPSolverInternal
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::NLPSolver
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::Interfaces::OOQPInternal
\n
\par
@copydoc scheme_QPInput
<br/>
@copydoc scheme_QPOutput
*/
/** \class CasADi::Interfaces::OOQPSolver
\n
\par
@copydoc scheme_QPInput
<br/>
@copydoc scheme_QPOutput
*/
/** \class CasADi::CollocationIntegratorInternal
\n
\par
@copydoc scheme_IntegratorInput
<br/>
@copydoc scheme_IntegratorOutput
*/
/** \class CasADi::CollocationIntegrator
\n
\par
@copydoc scheme_IntegratorInput
<br/>
@copydoc scheme_IntegratorOutput
*/
/** \class CasADi::OptimalControl::MultipleShootingInternal
\n
\par
@copydoc scheme_OCPInput
<br/>
@copydoc scheme_OCPOutput
*/
/** \class CasADi::OptimalControl::MultipleShooting
\n
\par
@copydoc scheme_OCPInput
<br/>
@copydoc scheme_OCPOutput
*/
/** \class CasADi::Sundials::SundialsInternal
\n
\par
@copydoc scheme_IntegratorInput
<br/>
@copydoc scheme_IntegratorOutput
*/
/** \class CasADi::Sundials::SundialsIntegrator
\n
\par
@copydoc scheme_IntegratorInput
<br/>
@copydoc scheme_IntegratorOutput
*/
/** \class CasADi::SimulatorInternal
\n
\par
@copydoc scheme_IntegratorInput
*/
/** \class CasADi::Simulator
\n
\par
@copydoc scheme_IntegratorInput
*/
/** \class CasADi::QPSolverInternal
\n
\par
@copydoc scheme_QPInput
<br/>
@copydoc scheme_QPOutput
*/
/** \class CasADi::QPSolver
\n
\par
@copydoc scheme_QPInput
<br/>
@copydoc scheme_QPOutput
*/
/** \class CasADi::Interfaces::QPOasesInternal
\n
\par
@copydoc scheme_QPInput
<br/>
@copydoc scheme_QPOutput
*/
/** \class CasADi::Interfaces::QPOasesSolver
\n
\par
@copydoc scheme_QPInput
<br/>
@copydoc scheme_QPOutput
*/
/** \class CasADi::LiftedSQPInternal
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::LiftedSQP
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::IpoptInternal
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::IpoptSolver
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::Sundials::CVodesInternal
\n
\par
@copydoc scheme_IntegratorInput
<br/>
@copydoc scheme_IntegratorOutput
*/
/** \class CasADi::Sundials::CVodesIntegrator
\n
\par
@copydoc scheme_IntegratorInput
<br/>
@copydoc scheme_IntegratorOutput
*/
/** \class CasADi::AcadoIntegratorInternal
\n
\par
@copydoc scheme_IntegratorInput
<br/>
@copydoc scheme_IntegratorOutput
*/
/** \class CasADi::AcadoIntegrator
\n
\par
@copydoc scheme_IntegratorInput
<br/>
@copydoc scheme_IntegratorOutput
*/
/** \class CasADi::Interfaces::IpoptQPInternal
\n
\par
@copydoc scheme_QPInput
<br/>
@copydoc scheme_QPOutput
*/
/** \class CasADi::Interfaces::IpoptQPSolver
\n
\par
@copydoc scheme_QPInput
<br/>
@copydoc scheme_QPOutput
*/
/** \class CasADi::KnitroInternal
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::KnitroSolver
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::Interfaces::LiftoptInternal
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::Interfaces::LiftoptSolver
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::IntegratorInternal
\n
\par
@copydoc scheme_IntegratorInput
<br/>
@copydoc scheme_IntegratorOutput
*/
/** \class CasADi::Integrator
\n
\par
@copydoc scheme_IntegratorInput
<br/>
@copydoc scheme_IntegratorOutput
*/
/** \class CasADi::Sundials::IdasInternal
\n
\par
@copydoc scheme_IntegratorInput
<br/>
@copydoc scheme_IntegratorOutput
*/
/** \class CasADi::Sundials::IdasIntegrator
\n
\par
@copydoc scheme_IntegratorInput
<br/>
@copydoc scheme_IntegratorOutput
*/
/** \class CasADi::SQPInternal
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::SQPMethod
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::RKIntegratorInternal
\n
\par
@copydoc scheme_IntegratorInput
<br/>
@copydoc scheme_IntegratorOutput
*/
/** \class CasADi::RKIntegrator
\n
\par
@copydoc scheme_IntegratorInput
<br/>
@copydoc scheme_IntegratorOutput
*/
/** \class CasADi::OCPSolverInternal
\n
\par
@copydoc scheme_OCPInput
<br/>
@copydoc scheme_OCPOutput
*/
/** \class CasADi::OCPSolver
\n
\par
@copydoc scheme_OCPInput
<br/>
@copydoc scheme_OCPOutput
*/
/** \class CasADi::ControlSimulatorInternal
\n
\par
@copydoc scheme_ControlSimulatorInput
*/
/** \class CasADi::ControlSimulator
\n
\par
@copydoc scheme_ControlSimulatorInput
*/
/** \class CasADi::CplexInternal
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::CplexSolver
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::OptimalControl::CollocationInternal
\n
\par
@copydoc scheme_OCPInput
<br/>
@copydoc scheme_OCPOutput
*/
/** \class CasADi::OptimalControl::Collocation
\n
\par
@copydoc scheme_OCPInput
<br/>
@copydoc scheme_OCPOutput
*/
/** \class CasADi::WorhpInternal
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
/** \class CasADi::WorhpSolver
\n
\par
@copydoc scheme_NLPInput
<br/>
@copydoc scheme_NLPOutput
*/
